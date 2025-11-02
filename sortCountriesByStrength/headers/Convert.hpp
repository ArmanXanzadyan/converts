#ifndef __CONVERT_HPP__
#define __CONVERT_HPP__

#include <cstdlib>
#include <vector>
#include <string>

namespace Algorithms
{

    template <typename T>
    std::vector<std::string> sortCountriesByStrength(const std::vector<std::vector<char> >& inputMatrix, 
                                                     const std::vector<std::string>& countries);
}

#include "../templates/Convert.cpp"

#endif /// __CONVERT_HPP__

