#ifndef __CONVERT_HPP__
#define __CONVERT_HPP__

#include <cstdlib>
#include <vector>

namespace Algorithms
{

template <typename T>
std::vector<T> getDiagonalOrder(const std::vector<std::vector<T> >& matrix);

}

#include "../templates/Convert.cpp"

#endif /// __CONVERT_HPP__

