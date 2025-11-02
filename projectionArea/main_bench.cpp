#include "headers/Convert.hpp"
#include <benchmark/benchmark.h>
#include <vector>
#include <iostream>

static void
BM_projectionArea(benchmark::State& state)
{
    std::vector<std::vector<int> > grid;
    grid.push_back(std::vector<int>());
    grid[0].push_back(0);
    grid[0].push_back(1);

    grid.push_back(std::vector<int>());
    grid[1].push_back(1);
    grid[1].push_back(2);
    std::vector<int> result;
    while (state.KeepRunning()) {
        result = Algorithms::projectionArea<int>(grid);
    }
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << ' ';
    }
    std::cout << std::endl;
}

BENCHMARK(BM_projectionArea);

BENCHMARK_MAIN();

