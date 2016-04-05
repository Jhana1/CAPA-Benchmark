#include "benchmarkKernels.cuh"

__global__
void addKernel(int *vecA, int *vecB, int *vecC, size_t size)
{
    int id = threadIdx.x + blockIdx.x * blockDim.x;
    if (id < size)
        vecC[id] = vecA[id] + vecB[id];
}
