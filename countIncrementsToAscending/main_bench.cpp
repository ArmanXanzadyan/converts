#include "headers/Convert.hpp"
#include <benchmark/benchmark.h>
#include <iostream>

static void
BM_countIncrementsToAscending(benchmark::State& state)
{
    int count;
    while (state.KeepRunning()) {
        int array1[] = {3, 4, 2, 1, 0};
        count = Algorithms::countIncrementsToAscending(array1, 5);
    }
    std::cout << "Count increments to ascending: " << count << std::endl; 
}

BENCHMARK(BM_countIncrementsToAscending);

BENCHMARK_MAIN();

