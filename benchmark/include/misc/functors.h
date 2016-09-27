#pragma once
// Project Headers

// Third Party HEaders

// STL Headers
#include <limits>
namespace AAA {
// These are all monoidal constructs, with their null elements provided.
template <typename T>
struct mult
{
    T identity;
    mult() : identity(1) {};
    __host__ __device__
        T operator()(const T& a, const T& b) const {
            return a * b;
        }
};

template <typename T>
struct divide
{
    T identity;
    divide() : identity(1) {};
    __host__ __device__
        T operator()(const T &a, const T &b) const {
            return a / b;
        }
};

template <typename T>
struct max
{
    T identity;
    max() : identity(std::numeric_limits<T>::min()) {};
    __host__ __device__
        T operator()(const T &a, const T &b) const {
            return (a > b) ? a : b;
        }
};

template <typename T>
struct min
{
    T identity;
    min() : identity(std::numeric_limits<T>::max()) {};
    __host__ __device__
        T operator ()(const T &a, const T &b) const {
            return (a > b) ? b : a;
        }
};
} // namespace AAA
