#pragma once

__global__
void addKernel(int *vecA, int *vecB, int *vecC, size_t size);

template <typename T>                                                                                
__global__                                                                                           
void addKernelT(T *vecA, T *vecB, T *vecC, size_t size)                                              
{                                                                                                    
    int id = threadIdx.x + blockIdx.x * blockDim.x;                                                  
    if (id < size)                                                                                   
    vecC[id] = vecA[id] + vecB[id];                                                              
}                                                                                                    
             
