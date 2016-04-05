#include <iostream>

#include "benchmarkObj.h"

int main()
{
    BenchmarkObj b;
    std::cout << b.TheoMemBandwidth() << std::endl;
    b.BenchMemBandwidth();
    return 0;
}
