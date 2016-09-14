#pragma once

// Project Headers
#include "misc/functors.h"
#include "misc/fixture.h"

// Third Party Headers
#include "hayai/hayai.hpp"


// To stop from being optimised out
#define TYPE float


// HOST REDUCTION BENCHMARKS
BENCHMARK_F(F0, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F1, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F2, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F3, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F4, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F5, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F6, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F7, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F8, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F9, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F10, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F11, HostReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}

// DEVICE MIN REDUCE
BENCHMARK_F(F0, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F1, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F2, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F3, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F4, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F5, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F6, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F7, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F8, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F9, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F10, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F11, DeviceReduce, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}

