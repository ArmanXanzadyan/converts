#include "headers/Convert.hpp"
#include <benchmark/benchmark.h>
#include <vector>

static void
BM_getDiagonalOrder(benchmark::State& state)
{   std::vector<std::vector<int> > matrix = {
        {1, 2, 3, 4, 5},
        {6, 7},
        {8},
        {9, 10, 11},
        {12, 13, 14, 15, 16}
    };
    std::vector<int> result;
    while (state.KeepRunning()) {
        benchmark::DoNotOptimize(Algorithms::getDiagonalOrder<int>(matrix));
    }
}


BENCHMARK(BM_getDiagonalOrder);

BENCHMARK_MAIN();

