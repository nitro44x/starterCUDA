# cudaOversubscribe

Github Actions: [![CMake](https://github.com/nitro44x/starterCUDA/actions/workflows/cmake.yml/badge.svg)](https://github.com/nitro44x/starterCUDA/actions/workflows/cmake.yml)

A very basic cli app to demonstrate a starter CMake/CUDA project.

# Building and running the demo

Dependencies:

* C++ 11 compiler (gcc-11 and VS2019 tested)
* nvcc (CUDA 11.4 tested)
* Graphics card with CUDA capability

Run the following commands:

    git clone https://github.com/nitro44x/starterCUDA
    cd starterCUDA 
    mkdir build
    cd build
    cmake ..
    make
    ./src/testApp/testApp

