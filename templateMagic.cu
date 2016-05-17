#include "cuda_runtime.h"
#include <cstdio>

template <typename T>
using uCat = T(*)(T);

template <typename T>
using mCat = T(*)(T, T);

__device__ int square(int a)
{
    return a * a;
}

__device__ int mult(int a, int b)
{
    return a * b;
}

template <typename T>
__device__ T mult(T a, T b)
{
    return a * b;
}

template <typename T>
__device__ T add2(int a, float b)
{
    return (T) (a + b);
}

template <typename T, mCat<T> func>
__global__ void biMapKernel(T *a, T *b, T *c, size_t size)
{
    size_t i = threadIdx.x + blockIdx.x * blockDim.x;
    if (i < size)
        c[i] = func(a[i], b[i]);
}

template <typename T, uCat<T> func>
__global__ void MapKernel(T *a, T *c, size_t size)
{
    size_t i = threadIdx.x + blockIdx.x * blockDim.x;
    if (i < size)
        c[i] = func(a[i]);
}

template <typename T, mCat<T> func>
__global__ void ReduceKernel(const T *a, T *c, size_t size)
{
    extern __shared__ T sdata[];

    size_t myId = threadIdx.x + blockIdx.x * blockDim.x;
    size_t tid  = threadIdx.x;

    if (myId > size)
        return;

    sdata[tid] = a[myId];
    __syncthreads();

    for (size_t i = blockDim.x/2; i > 0; i /= 2)
    {
        if (tid < i)
        {
            sdata[tid] = func(sdata[tid], sdata[tid+i]);
        }
        __syncthreads();
    }
    if (tid == 0)
    {
        c[blockIdx.x] = sdata[0];
    }
}

template <typename T>
void arrPrint(T *a, size_t l)
{
    for (size_t i = 0; i < l; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int h_a[10], h_b[10], h_c[10];
    int *d_a, *d_b, *d_c;

    for (int i = 0; i < 10; ++i)
    {
        h_a[i] = h_b[9-i] = -i;
    }

    arrPrint(h_a,10);
    arrPrint(h_b,10);
    arrPrint(h_c,10);

    cudaMalloc((void **) &d_a, 10*sizeof(int));
    cudaMalloc((void **) &d_b, 10*sizeof(int));
    cudaMalloc((void **) &d_c, 10*sizeof(int));
    cudaMemcpy(d_a, h_a, 10 * sizeof(int), cudaMemcpyHostToDevice);
    cudaMemcpy(d_b, h_b, 10 * sizeof(int), cudaMemcpyHostToDevice);

    biMapKernel<int,mult><<<10,1>>>(d_a, d_b, d_c, 10);

    cudaMemcpy(h_c, d_c, 10 * sizeof(int), cudaMemcpyDeviceToHost);

    arrPrint(h_c,10);
    return 0;
}
