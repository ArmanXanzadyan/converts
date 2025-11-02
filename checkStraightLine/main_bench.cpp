#include <benchmark/benchmark.h>
#include <vector>
#include "headers/Convert.hpp"

namespace Algorithms {

template <typename T>
bool checkStraightLine(const std::vector<std::vector<int> >& coordinates);

}

static std::vector<std::vector<int> > generateCoordinates(int n) {
    std::vector<std::vector<int> > coords;
    for (int i = 0; i < n; ++i) {
        std::vector<int> point;
        point.push_back(i); 
        point.push_back(2*i); 
        coords.push_back(point);
    }
    return coords;
}

static void BM_CheckStraightLine(benchmark::State& state) {
    int n = static_cast<int>(state.range(0));
    std::vector<std::vector<int> > coords = generateCoordinates(n);
    
    for (auto _ : state) {
        benchmark::DoNotOptimize(Algorithms::checkStraightLine<int>(coords));
    }
}

BENCHMARK(BM_CheckStraightLine)->Arg(10)->Arg(100)->Arg(1000)->Arg(10000);

BENCHMARK_MAIN();

