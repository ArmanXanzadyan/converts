#include "../headers/Convert.hpp"
#include <cstddef>

namespace Algorithms
{

template <typename T>
void
compute_fast(const T* input, const size_t size, T* output)
{
    for (size_t i = 0; i < size; ++i) {
        output[i] = input[input[i]];
    }
}

template <typename T>
void
compute_inplace(T* input, const size_t size)
{
    for (size_t i = 0; i < size; ++i) {
        input[i] += size * (input[input[i]] % size);
    }
    for (size_t i = 0; i < size; ++i) {
        input[i] /= size;
    }
}

}

