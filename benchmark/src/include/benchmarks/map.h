#pragma once
#include "bench.h"
#include "misc/fixture.h"
#include "hayai/hayai.hpp"

// Host
BENCHMARK_F(F0, HostMap, 100, 1)
{
    bench->host_map();
} 
BENCHMARK_F(F1, HostMap, 100, 1)
{
    bench->host_map();
} 
BENCHMARK_F(F2, HostMap, 100, 1)
{
    bench->host_map();
} 
BENCHMARK_F(F3, HostMap, 100, 1)
{
    bench->host_map();
} 
BENCHMARK_F(F4, HostMap, 100, 1)
{
    bench->host_map();
}
BENCHMARK_F(F5, HostMap, 100, 1)
{
    bench->host_map();
} 
BENCHMARK_F(F6, HostMap, 100, 1)
{
    bench->host_map();
} 
BENCHMARK_F(F7, HostMap, 100, 1)
{
    bench->host_map();
} 
BENCHMARK_F(F8, HostMap, 100, 1)
{
    bench->host_map();
}
BENCHMARK_F(F9, HostMap, 100, 1)
{
    bench->host_map();
}
BENCHMARK_F(F10, HostMap, 100, 1)
{
    bench->host_map();
}

// Device
BENCHMARK_F(F0, DeviceMap, 100, 1)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F1, DeviceMap, 100, 1)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F2, DeviceMap, 100, 1)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F3, DeviceMap, 100, 1)
{
    bench->device_map_onload();
}
BENCHMARK_F(F4, DeviceMap, 100, 1)
{
    bench->device_map_onload();
}
BENCHMARK_F(F5, DeviceMap, 100, 1)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F6, DeviceMap, 100, 1)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F7, DeviceMap, 100, 1)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F8, DeviceMap, 100, 1)
{
    bench->device_map_onload();
} 
BENCHMARK_F(F9, DeviceMap, 100, 1)
{
    bench->device_map_onload();
}
BENCHMARK_F(F10, DeviceMap, 100, 1)
{
    bench->device_map_onload();
} 
