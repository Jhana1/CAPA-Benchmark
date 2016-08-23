#pragma once
#include <thrust/device_vector.h>
#include <thrust/host_vector.h>
#include <thrust/reduce.h>
#include <thrust/sequence.h>
#include <thrust/iterator/transform_iterator.h>
#include <thrust/generate.h>

template <typename T> 
T HReduction(thrust::host_vector<T> &H_Vec);

template <typename T>
T DReduction(thrust::device_vector<T> &D_Vec);

template <typename T>
T DReduction(thrust::device_vector<T> &D_Vec, thrust::host_vector<T> &H_Vec);

template <typename T>
void prepare(thrust::host_vector<T> &h);
