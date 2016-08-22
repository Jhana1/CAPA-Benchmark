#pragma once
#define EIGEN_DONT_VECTORIZE 1
#include "benchInfo.h"
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/sort.h>
#include <thrust/random.h>
#include <thrust/execution_policy.h>
#include <cublas_v2.h>
#include <curand.h>
#include <Eigen/Dense>
#include <Eigen/Core>
#include <typeinfo>

template <typename T, BenchInfo &B>
struct Bench{
    typedef Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> MatrixXT;

    // Non-BLAS
    thrust::host_vector<T> H;
    thrust::device_vector<T> D;
    const size_t WARM_UP_ITERS;

    // Matrix Multiplication/CuBLAS Related
    cublasHandle_t handle;
    thrust::host_vector<T> matrixA;
    thrust::host_vector<T> matrixB;
    thrust::host_vector<T> matrixC;
    const size_t hA, wA, wB;

    // Matrix Multiplication/Eigen Related
    MatrixXT eMatrixA;
    MatrixXT eMatrixB;
    MatrixXT eMatrixC;

    // Constructors
    Bench() : WARM_UP_ITERS(B.mWarmUpIterations), hA(B.mHeightA), wA(B.mWidthA), wB(B.mWidthB)
    {
        H.resize(B.mVectorLength);

        matrixA.resize(hA * wA);
        matrixB.resize(wA * wB);
        matrixC.resize(wB * hA);
        
        randomise();
        cuBLAS_prepare();
    }

    ~Bench()
    {
        cuBLAS_destroy();
    }

    void randomise()
    {
        thrust::default_random_engine rng;
        thrust::generate(H.begin(), H.end(), rng);
        thrust::generate(matrixA.begin(), matrixA.end(), rng);
        thrust::generate(matrixB.begin(), matrixB.end(), rng);
        eMatrixA = Eigen::Map<MatrixXT>(matrixA.data(), B.mHeightA, B.mWidthA);
        eMatrixB = Eigen::Map<MatrixXT>(matrixB.data(), B.mWidthA, B.mWidthB);
        eMatrixC.resize(B.mHeightA, B.mWidthB);
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
    void onload()
    {
        D = H;
    }

    void offload()
    {
        H = D;
    }

    // Reductions
    template <template <class> class Functor>
    T host_reduce(Functor<T> &binaryOp)
    {
        return thrust::reduce(thrust::host, H.begin(), H.end(), binaryOp.identity, binaryOp);
    }

    template <template <class> class Functor>
    T device_reduce_onload(Functor<T> &binaryOp)
    {
        //D = H;
        return thrust::reduce(thrust::device, H.begin(), H.end(), binaryOp.identity, binaryOp);
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
        matrixA.resize(hA * wA);
        matrixB.resize(wA * wB);
        matrixC.resize(hA * wB);
        cublasCreate(&handle);
        device_matrix_mult();
        device_matrix_mult();
    }

    void cuBLAS_destroy()
    {
        cublasDestroy(handle);
    }

    void host_matrix_mult()
    {
        eMatrixC = eMatrixA * eMatrixB;
    }

    void device_matrix_mult()
    {
        thrust::device_vector<T> d_A = matrixA;
        thrust::device_vector<T> d_B = matrixB;
        thrust::device_vector<T> d_C(hA * wB);

        cuBLAS_mmul(thrust::raw_pointer_cast(&d_A[0]), 
                    thrust::raw_pointer_cast(&d_B[0]), 
                    thrust::raw_pointer_cast(&d_C[0]),
                    hA, wA, wB);

        matrixC = d_C;
    }

    void cuBLAS_mmul(const float *matA, const float *matB, float *matC, const size_t m, const size_t k, const size_t n) 
    {
        size_t lda     = m;
        size_t ldb     = k;
        size_t ldc     = m;
        const float alf    = 1;
        const float bet    = 0;
        const float *alpha = &alf;
        const float *beta  = &bet;

        // Do the actual multiplicatio
        cublasSgemm(handle, CUBLAS_OP_N, CUBLAS_OP_N, m, n, k, alpha, matA, lda, matB, ldb, beta, matC, ldc); 
    }
    
    void cuBLAS_mmul(const double *matA, const double *matB, double *matC, const size_t m, const size_t k, const size_t n) 
    {
        size_t lda     = m;
        size_t ldb     = k;
        size_t ldc     = m;
        const double alf    = 1;
        const double bet    = 0;
        const double *alpha = &alf;
        const double *beta  = &bet;

        // Do the actual multiplicatio
        cublasDgemm(handle, CUBLAS_OP_N, CUBLAS_OP_N, m, n, k, alpha, matA, lda, matB, ldb, beta, matC, ldc); 
    }
};

