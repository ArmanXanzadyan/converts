#ifndef __CONVERT_HPP__
#define __CONVERT_HPP__

#include <cstdlib>
#include <vector>

const int LENGTH = 20;
const int WIDTH = 20;
const double HIGHT = 3.2;

namespace Algorithms
{

template <typename T>
std::vector<int> projectionArea(const std::vector<std::vector<int> >& grid);

}

#include "../templates/Convert.cpp"

#endif /// __CONVERT_HPP__

