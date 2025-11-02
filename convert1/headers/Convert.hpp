#ifndef __CONVERT_HPP__
#define __CONVERT_HPP__

#include <cstdlib>

namespace Algorithms
{

template <typename T>
void compute_fast(const T* input, const size_t size, T* output);

template <typename T>
void compute_inplace(T* input, const size_t size);

}

#include "../templates/Convert.cpp"

#endif /// __CONVERT_HPP__

