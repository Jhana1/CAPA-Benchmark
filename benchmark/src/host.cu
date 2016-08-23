// Project Headers

// Third Party Headers
#include "hayai/hayai.hpp"

// STL Headers
//#include <cstdlib>
#include <iostream>

// Benchmark Includes
// Must include typedefs first
#include "misc/typedefs.h"
#include "benchmarks/map.h"
#include "benchmarks/reduction.h"
#include "benchmarks/scan.h"
#include "benchmarks/matrix.h"

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
    
    hayai::Benchmarker::RunAllTests();
    return 0;
}
