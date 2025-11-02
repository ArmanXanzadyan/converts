#include "headers/Convert.hpp"
#include <benchmark/benchmark.h>
#include <iostream>

static void
BM_sortCountriesByStrength(benchmark::State& state)
{
    while (state.KeepRunning()) {
        std::vector<std::vector<char> > matrix;
        matrix.push_back(std::vector<char>(2, 'F'));   // 2
        matrix.push_back(std::vector<char>(2, 'F'));   // 2
        matrix.push_back(std::vector<char>(2, 'N'));   // 0

        std::vector<std::string> countries;
        countries.push_back("USA");
        countries.push_back("UK");
        countries.push_back("France");

        std::vector<std::string> result = Algorithms::sortCountriesByStrength(matrix, countries);
    }
}

BENCHMARK(BM_sortCountriesByStrength);

BENCHMARK_MAIN();

