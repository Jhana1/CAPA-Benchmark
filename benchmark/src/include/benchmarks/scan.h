#pragma once

// Project Headers
#include "misc/functors.h"
#include "misc/fixture.h"

// Third Party Headers
#include "hayai/hayai.hpp"


// To stop from being optimised out
#define TYPE float


// HOST REDUCTION BENCHMARKS
BENCHMARK_F(F0, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F1, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F2, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F3, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F4, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F5, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F6, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F7, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F8, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F9, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F10, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F11, HostScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}

// DEVICE MIN scan
BENCHMARK_F(F0, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F1, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F2, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F3, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F4, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F5, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F6, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F7, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F8, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F9, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F10, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F11, DeviceScan, RUNS, ITERATIONS)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}

