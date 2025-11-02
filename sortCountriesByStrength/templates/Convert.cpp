#include "../headers/Convert.hpp"
#include <algorithm>
#include <cstddef>
#include <utility>
#include <vector>

namespace Algorithms
{
    
struct CompareCountry
{
    bool operator()(const std::pair<int, std::string>& pair1,
                    const std::pair<int, std::string>& pair2) const
    {
        if (pair1.first != pair2.first) {
            return pair1.first > pair2.first;
        }
        return false;
    }

};

std::vector<std::string>
sortCountriesByStrength(const std::vector<std::vector<char> >& inputMatrix, 
                        const std::vector<std::string>& countries)
{
    std::vector<std::pair<int, std::string> > pairs; 
    const size_t matrixSize1 = inputMatrix.size();
    for (size_t i = 0; i < matrixSize1; ++i) {
        const size_t matrixSize2 = inputMatrix[i].size();
        size_t count = 0;
        for (size_t j = 0; j < matrixSize2; ++j) {
            if ('F' == inputMatrix[i][j]) {
                ++count;
            }
        }
        pairs.push_back(std::make_pair(count,countries[i] ));
    }
    std::stable_sort(pairs.begin(), pairs.end(), CompareCountry());
    const size_t countriesSize = pairs.size();
    std::vector<std::string> countresVector(countriesSize);
    for (size_t i = 0; i < countriesSize; ++i) {
        countresVector[i] = pairs[i].second;
    }
    return countresVector;
}

}

