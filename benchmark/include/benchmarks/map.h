#pragma once
#include "bench.h"
#include "misc/fixture.h"
#include "hayai/hayai.hpp"

// Host
BENCHMARK_F(F0, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
} 
BENCHMARK_F(F1, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
} 
BENCHMARK_F(F2, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
} 
BENCHMARK_F(F3, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
} 
BENCHMARK_F(F4, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
}
BENCHMARK_F(F5, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
} 
BENCHMARK_F(F6, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
} 
BENCHMARK_F(F7, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
} 
BENCHMARK_F(F8, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
}
BENCHMARK_F(F9, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
}
BENCHMARK_F(F10, HostMap, RUNS, ITERATIONS)
{
    bench->host_map();
}

// Device
BENCHMARK_F(F0, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F1, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F2, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F3, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
}
BENCHMARK_F(F4, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
}
BENCHMARK_F(F5, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F6, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F7, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F8, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F9, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
}
BENCHMARK_F(F10, DeviceMap, RUNS, ITERATIONS)
{
    bench->device_map_onload();
} 
