#include <thrust/host_vector.h>
#include <thrust/random.h>
#include <thrust/generate.h>
#include <thrust/sort.h>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include "hayai.hpp"

// defines the function prototype
#include "device.h"


struct bench
{
    void host_sort(thrust::host_vector<int> &V)
    {
        thrust::sort(V.begin(), V.end());
    }

    void device_sort(thrust::host_vector<int> &V)
    {
        sort_on_device(V);
    }
};



thrust::host_vector<int> h_vec(200000);


int setup(void)
{
    // generate 20 random numbers on the host
    thrust::default_random_engine rng;
    thrust::generate(h_vec.begin(), h_vec.end(), rng);

    // interface to CUDA code
    // print sorted array
    //thrust::copy(h_vec.begin(), h_vec.end(), std::ostream_iterator<int>(std::cout, "\n"));

    return 0;
}

BENCHMARK(bench, host_sort, 10, 100)
{
    bench().host_sort(h_vec);
}

BENCHMARK(bench, device_sort, 10, 100)
{
    bench().device_sort(h_vec);
}


int main()
{
    hayai::ConsoleOutputter consoleOutputter;//(std::cout);
    hayai::Benchmarker::AddOutputter(consoleOutputter);
    hayai::Benchmarker::RunAllTests();
    return 0;
}
