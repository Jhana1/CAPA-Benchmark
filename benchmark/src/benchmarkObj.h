#pragma once
#include <memory>
#include <iostream>

#include <cuda_runtime.h>
#include <helper_cuda.h>

class BenchmarkObj  
{
public:
    cudaDeviceProp mDeviceInfo;
    int mDevice;
public:
    BenchmarkObj();
    BenchmarkObj(int device);
    std::string DeviceName();
    int TheoMemBandwidth();
    void BenchMemBandwidth();
};



