#include "../headers/Convert.hpp"
#include <cstddef>

namespace Algorithms
{

template <typename T>
int 
countIncrementsToAscending(const T* input, const size_t size)
{
    int count = 0;
    int temp = input[0];
    for (size_t i = 1; i < size; ++i) {
        if (temp >= input[i]) { 
            count += temp - input[i] + 1;
            ++temp;
            continue;
        }
        temp = input[i];
    }
    return count;
}


}

