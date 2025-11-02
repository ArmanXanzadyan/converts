#include <benchmark/benchmark.h>
#include <vector>
#include <string>
#include "headers/Convert.hpp"

static void BM_FullJustify(benchmark::State& state)
{
    std::vector<std::string> words;
    words.push_back("The");
    words.push_back("quick");
    words.push_back("brown");
    words.push_back("fox");
    words.push_back("jumps");
    words.push_back("over");
    words.push_back("the");
    words.push_back("lazy");
    words.push_back("dog");

    while (state.KeepRunning()) {
        std::vector<std::string> result = Algorithms::fullJustify(words, 16);
        benchmark::DoNotOptimize(result);
    }
}

BENCHMARK(BM_FullJustify);

BENCHMARK_MAIN();

