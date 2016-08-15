// Project Headers
#include "functors.h"
#include "bench.h"
#include "benchFixture.h"

// Third Party Headers
#include "hayai.hpp"

// STL Headers
//#include <cstdlib>
#include <iostream>

typedef BenchFixture<float>  FloatFixture;
typedef BenchFixture<double> DoubleFixture;
typedef BenchFixture<int>    IntFixture;

volatile double acc = 0;


BENCHMARK_F(FloatFixture, HostMinReduce, 100, 10)
{
    AAA::min<float> binaryOp;
    acc += bench->host_reduce(binaryOp);
}

BENCHMARK_F(FloatFixture, DeviceMinReduceWithOnload, 100, 10)
{
    AAA::min<float> binaryOp;
    bench->device_reduce_onload(binaryOp);
}

BENCHMARK_F(FloatFixture, HostMatrixMult, 10, 1)
{
    bench->host_matrix_mult();
}

BENCHMARK_F(FloatFixture, DeviceMatrixMult, 10, 1)
{
    bench->device_matrix_mult();
}

int main()
{
    hayai::ConsoleOutputter consoleOutputter;//(std::cout);
    hayai::Benchmarker::AddOutputter(consoleOutputter);
    
    Bench<float> bb;
    AAA::max<float> binaryOp;

    bb.prepare();
    bb.cuBLAS_prepare();
    hayai::Benchmarker::RunAllTests();
    bb.cuBLAS_destroy();
    return 0;
}
