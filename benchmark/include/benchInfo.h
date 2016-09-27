#pragma once

struct BenchInfo
{
    size_t mWarmUpIterations;
    size_t mVectorLength;
    size_t mHeightA;
    size_t mWidthA;
    size_t mWidthB;
    BenchInfo(size_t a, size_t b, size_t c, size_t d, size_t e) : 
        mWarmUpIterations(a),
        mVectorLength(b),
        mHeightA(c),
        mWidthA(d),
        mWidthB(e)
    {};
};
