#pragma once
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/sort.h>
#include <thrust/random.h>
#include <cublas_v2.h>
#include <curand.h>

template <typename T>
struct Bench{

    // Non-BLAS
    thrust::host_vector<T> H;
    thrust::device_vector<T> D;
    size_t WARM_UP_ITERS;

    // Matrix Multiplication/CuBLAS Related
    cublasHandle_t handle;
    thrust::host_vector<T> A;
    thrust::host_vector<T> B;
    thrust::host_vector<T> C;
    size_t hA, wA, wB;

    // Constructors
    Bench() 
    {
        H.resize(2000000);
        WARM_UP_ITERS = 10;
        hA = wA = wB = 300;
        A.resize(hA * wA);
        B.resize(wA * wB);
        C.resize(wB * hA);
        randomise();
    }

    Bench(size_t n)
    {
        H.resize(n);
        WARM_UP_ITERS = 10;
        hA = wA = wB = 10;
        A.resize(hA * wA);
        B.resize(wA * wB);
        C.resize(hA * wB);
        randomise();
    }

    void randomise()
    {
        thrust::default_random_engine rng;
        thrust::generate(H.begin(), H.end(), rng);
        thrust::generate(A.begin(), A.end(), rng);
        thrust::generate(B.begin(), B.end(), rng);
    }

    void prepare()
    {
        for (int i = 0; i < WARM_UP_ITERS; ++i)
        {
            thrust::reduce(H.begin(), H.end());
            thrust::reduce(D.begin(), D.end());
            randomise();
            D = H;
        }
    }

    // Load data on and off the device.
    void onload(thrust::host_vector<T> &H)
    {
        this->H = H;
        D = H;
    }

    void offload(thrust::host_vector<T> &H)
    {
        H = D;
    }

    // Reductions
    template <template <class> class Functor>
    T host_reduce(Functor<T> &binaryOp)
    {
        return thrust::reduce(H.begin(), H.end(), binaryOp.identity, binaryOp);
    }

    template <template <class> class Functor>
    T device_reduce_onload(Functor<T> &binaryOp)
    {
        thrust::device_vector<T> D = H;
        return thrust::reduce(D.begin(), D.end(), binaryOp.identity, binaryOp);
    }

    template <template <class> class Functor>
    T device_reduce_no_onload(Functor<T> &binaryOp)
    {
        return thrust::reduce(D.begin(), D.end(), binaryOp.identity, binaryOp);
    }

    // Scans
    
    
    // Maps
    
    // cuBLAS
    void cuBLAS_prepare()
    {
        D.resize(0);
        A.resize(hA * wA);
        B.resize(wA * wB);
        C.resize(hA * wB);
        cublasCreate(&handle);
        device_matrix_mult();
        device_matrix_mult();
    }

    void cuBLAS_destroy()
    {
        cublasDestroy(handle);
    }

    thrust::host_vector<T> host_matrix_mult()
    {
        std::vector<T> ret_vec(hA * wB);
        for (size_t i = 0; i < hA; ++i)
        {
            for (size_t j = 0; j < wB; ++j)
            {
                T acc = 0;
                for (size_t k = 0; k < wA; ++k)
                {
                    acc += A[i * wA + k] * B[k * wB + j];
                }
                ret_vec[i * wB + j] = acc;
            }
        }
        return ret_vec;
    }

    thrust::host_vector<T> device_matrix_mult()
    {
        thrust::device_vector<T> d_A = A;
        thrust::device_vector<T> d_B = B;
        thrust::device_vector<T> d_C(hA * wB);

        cuBLAS_mmul(thrust::raw_pointer_cast(&d_A[0]), 
                    thrust::raw_pointer_cast(&d_B[0]), 
                    thrust::raw_pointer_cast(&d_C[0]),
                    hA, wA, wB);

        thrust::host_vector<T> h_C = d_C;
        return h_C;
    }
    
    void cuBLAS_mmul(const T *A, const T *B, T *C, const size_t m, const size_t k, const size_t n) 
    {
        size_t lda     = m;
        size_t ldb     = k;
        size_t ldc     = m;
        const T alf    = 1;
        const T bet    = 0;
        const T *alpha = &alf;
        const T *beta  = &bet;

        // Do the actual multiplication
        cublasSgemm(handle, CUBLAS_OP_N, CUBLAS_OP_N, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
    }
};

