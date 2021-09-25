/**
 * @file kernel.cpp
 * @brief Simple kernel calls
 */

#include "kernel.hpp"

#include <cuda_runtime.h>

namespace {

__global__ void addOne(double *a) { *a += 1; }

} // namespace

namespace kernels {

double launch_simple_kernel() {
    double *d = nullptr;
    cudaMallocManaged((void **)&d, sizeof(double));
    *d = 0;
    addOne<<<1, 1>>>(d);
    cudaDeviceSynchronize();
    double out = *d;
    cudaFree(d);
    return out;
}

} // namespace kernels
