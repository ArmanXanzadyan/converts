#include "../headers/Convert.hpp"
#include <algorithm>
#include <cstddef>
#include <utility>
#include <vector>

namespace Algorithms
{
template <typename T>
std::vector<int>
projectionArea(const std::vector<std::vector<int> >& grid)
{
    std::vector<int> result(3, 0);
    const int citySize = grid.size();
    if (0 == citySize) return result;
    const int floorSize = grid[0].size();

    const int area = LENGTH * WIDTH;
    
    for (int i = 0; i < citySize; ++i) {
        for (int j = 0; j < floorSize; ++j) {
            if (grid[i][j] > 0) {
                result[0] += area;
            }
        }
    }
    
    for (int i = 0; i < citySize; ++i) {
        int maxHight = 0;
        for (int j = 0; j < floorSize; ++j) {
            maxHight = std::max(maxHight, grid[i][j]);
        }
        result[1] += static_cast<int>(maxHight * HIGHT * LENGTH);
    }
    
    for (int i = 0; i < citySize; ++i) {
        int maxHight = 0;
        for (int j = 0; j < floorSize; ++j) {
            maxHight = std::max(maxHight, grid[i][j]);
        }
        result[2] += static_cast<int>(maxHight * HIGHT * WIDTH);
    }

    return result;
}

}
