// Project Headers
#include "functors.h"
#include "bench.h"
#include "benchInfo.h"
#include "benchFixture.h"

// Third Party Headers
#include "hayai.hpp"

// STL Headers
//#include <cstdlib>
#include <iostream>

// Benchmark Includes
// Must include typedefs first
#include "benchmarkTypedefs.h"
#include "reductionBenchmarks.h"
#include "matrixBenchmarks.h"

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        hayai::JsonOutputter consoleOutputter(std::cout);
        hayai::Benchmarker::AddOutputter(consoleOutputter);
    }
    else
    {
        hayai::ConsoleOutputter consoleOutputter;
        hayai::Benchmarker::AddOutputter(consoleOutputter);
    }
    
    Bench<float, case6> bb;
    AAA::max<float> binaryOp;

    bb.prepare();
    bb.cuBLAS_prepare();
    hayai::Benchmarker::RunAllTests();
    bb.cuBLAS_destroy();
    return 0;
}
