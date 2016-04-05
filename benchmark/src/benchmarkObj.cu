#include "benchmarkObj.h"
#include "benchmarkKernels.cuh"
#include "miscFunctions.h"

BenchmarkObj::BenchmarkObj()
{
    mDevice = 0;
    cudaGetDeviceProperties(&mDeviceInfo, mDevice);
}

BenchmarkObj::BenchmarkObj(int device)
{
    mDevice = device;
    cudaGetDeviceProperties(&mDeviceInfo, mDevice);
}

std::string BenchmarkObj::DeviceName()
{
    return std::string(mDeviceInfo.name);
}

int BenchmarkObj::TheoMemBandwidth()
{
    int memoryClockRate = mDeviceInfo.memoryClockRate;
    int memoryBusWidth = mDeviceInfo.memoryBusWidth;
    return memoryClockRate * (memoryBusWidth/8);
}

void BenchmarkObj::BenchMemBandwidth()
{
    size_t size = 10;
    int *h_a, *h_b, *h_c;
    int *d_a, *d_b, *d_c;
    
    h_a = (int*) malloc(sizeof(int) * size);
    h_b = (int*) malloc(sizeof(int) * size);
    h_c = (int*) malloc(sizeof(int) * size);

    vectorFill(h_a, size);
    vectorFill(h_b, size);
    vectorPrint(h_a, size);
    vectorPrint(h_b, size);

    cudaMalloc((void **) &d_a, sizeof(int) * size);
    cudaMalloc((void **) &d_b, sizeof(int) * size);
    cudaMalloc((void **) &d_c, sizeof(int) * size);

    cudaMemcpy(d_a, h_a, sizeof(int) * size, cudaMemcpyHostToDevice);
    cudaMemcpy(d_b, h_b, sizeof(int) * size, cudaMemcpyHostToDevice);

    addKernel<<<1024,1024>>>(d_a, d_b, d_c, size);
    addKernelT<int><<<1024,1024>>>(d_c, d_c, d_c, size);

    cudaMemcpy(h_c, d_c, sizeof(int) * size, cudaMemcpyDeviceToHost);
    vectorPrint(h_c, size);

    cudaFree(d_a);
    cudaFree(d_b);
    cudaFree(d_c);
    free(h_a);
    free(h_b);
    free(h_c);


}
