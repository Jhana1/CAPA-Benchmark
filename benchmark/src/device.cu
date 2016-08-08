#include <thrust/sort.h>
#include <thrust/device_vector.h>
#include <thrust/copy.h>

#include "device.h"

void sort_on_device(thrust::host_vector<int>& h_vec)
{
    thrust::device_vector<int> d_vec = h_vec;

    thrust::sort(d_vec.begin(), d_vec.end());

    h_vec = d_vec;
}


