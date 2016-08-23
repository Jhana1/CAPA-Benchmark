#pragma once

// Project Headers
#include "misc/functors.h"
#include "misc/fixture.h"

// Third Party Headers
#include "hayai/hayai.hpp"


// To stop from being optimised out
#define TYPE float


// HOST REDUCTION BENCHMARKS
BENCHMARK_F(F0, HostMinScan, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F1, HostMinScan, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F2, HostMinScan, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F3, HostMinScan, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F4, HostMinScan, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F5, HostMinScan, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F6, HostMinScan, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F7, HostMinScan, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F8, HostMinScan, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F9, HostMinScan, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F10, HostMinScan, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}
BENCHMARK_F(F11, HostMinScan, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->host_scan(binaryOp);
}

// DEVICE MIN scan
BENCHMARK_F(F0, DeviceMinScanOnload, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F1, DeviceMinScanOnload, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F2, DeviceMinScanOnload, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F3, DeviceMinScanOnload, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F4, DeviceMinScanOnload, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F5, DeviceMinScanOnload, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F6, DeviceMinScanOnload, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F7, DeviceMinScanOnload, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F8, DeviceMinScanOnload, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F9, DeviceMinScanOnload, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F10, DeviceMinScanOnload, 10, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}
BENCHMARK_F(F11, DeviceMinScanOnload, 100, 1)
{
    AAA::min<TYPE> binaryOp;
    bench->device_scan_onload(binaryOp);
}

