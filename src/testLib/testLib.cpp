/**
 * @file testLib.cpp
 * @brief simple library call
 */

#include <testLib/testLib.hpp>

#include <cuda_runtime.h>

namespace {

__global__ void addTwo(double *a) { *a += 2; }

} // namespace

namespace testLib {

double call_simpleLib() {
    double *d = nullptr;
    cudaMallocManaged((void **)&d, sizeof(double));
    *d = 0;
    addTwo<<<1, 1>>>(d);
    cudaDeviceSynchronize();
    double out = *d;
    cudaFree(d);
    return out;
}

} // namespace testLib