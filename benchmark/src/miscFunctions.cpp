#include "miscFunctions.h"

timespec diffTime(const timespec &start, const timespec &end)
{
    timespec diff;
    const long nanosec = 1000000000;
    diff.tv_sec = end.tv_sec - start.tv_sec;
    if (!diff.tv_sec)
    {
        diff.tv_nsec = end.tv_nsec - start.tv_nsec;
    }
    else 
    {
        --diff.tv_sec;
        diff.tv_nsec = nanosec - (start.tv_nsec - end.tv_nsec);
    }
    return diff;
}
