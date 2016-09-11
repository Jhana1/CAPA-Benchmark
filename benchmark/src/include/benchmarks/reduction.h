#pragma once

// Project Headers
#include "misc/functors.h"
#include "misc/fixture.h"

// Third Party Headers
#include "hayai/hayai.hpp"


// To stop from being optimised out
#define TYPE float


// HOST REDUCTION BENCHMARKS
BENCHMARK_F(F0, HostMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F1, HostMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F2, HostMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F3, HostMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F4, HostMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F5, HostMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F6, HostMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F7, HostMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F8, HostMinReduce, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F9, HostMinReduce, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F10, HostMinReduce, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}
BENCHMARK_F(F11, HostMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_reduce(binaryOp);
}

// DEVICE MIN REDUCE
BENCHMARK_F(F0, DeviceMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F1, DeviceMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F2, DeviceMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F3, DeviceMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F4, DeviceMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F5, DeviceMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F6, DeviceMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F7, DeviceMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F8, DeviceMinReduce, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F9, DeviceMinReduce, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F10, DeviceMinReduce, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}
BENCHMARK_F(F11, DeviceMinReduce, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_reduce_onload(binaryOp);
}

