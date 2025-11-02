#include "headers/Convert.hpp"
#include <benchmark/benchmark.h>

static void
BM_compute_fast(benchmark::State& state)
{
    while (state.KeepRunning()) {
        int array1[] = {3, 4, 2, 1, 0};
        int array2[] = {0, 0, 0, 0, 0};
        Algorithms::compute_fast(array1, 5, array2);
    }
}

static void
BM_compute_inplace(benchmark::State& state)
{
    while (state.KeepRunning()) {
        int array1[] = {3, 4, 2, 1, 0};
        Algorithms::compute_inplace(array1, 5);
    }
}

BENCHMARK(BM_compute_fast);
BENCHMARK(BM_compute_inplace);

BENCHMARK_MAIN();

