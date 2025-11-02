#include "../headers/Convert.hpp"
#include <cstdlib>
#include <vector>

namespace Algorithms
{

template <typename T>
std::vector<T> 
getDiagonalOrder(const std::vector<std::vector<T> >& matrix)
{
    std::vector<T> result;
    if (matrix.empty()) return result;

    const int rows = static_cast<int>(matrix.size());
    int maxCols = 0;
    for (int i = 0; i < rows; ++i) {
        maxCols = std::max(maxCols, i + static_cast<int>(matrix[i].size()) - 1);
    }

    const int maxSum = rows + maxCols - 2;
    for (int s = 0; s <= maxSum; ++s) {
        const int startRow = std::max(0, s - (maxCols - 1));
        const int endRow   = std::min(rows - 1, s);
        for (int i = endRow; i >= startRow; --i) {
            const int j = s - i;
            if (j < static_cast<int>(matrix[i].size())) {
                result.push_back(matrix[i][j]);
            }
        }
    }

    return result;
}

}

