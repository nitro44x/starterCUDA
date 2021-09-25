# starterCUDA

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
    ctest

## Build Docs

If you have doxygen installed, you can build the docs by enabling the BUILD_DOCS option during generation.

    cmake -DBUILD_DOCS:BOOL=ON ..
    make
    
At this point, you should be able to open the file <sourceRoot>/build/html/index.html in a web browser to see
the generated documentation.

## ccache

This template also searches for ccache to speedup reoccuring computations. 
For more info see [ccache](https://ccache.dev/). This is completely optional and should work
behind the scenes.

# Thirdparty

In order to give the generated documentation a little makeover, this template uses the 
[doxygen-awesome-css theme](https://github.com/jothepro/doxygen-awesome-css). I've opted to just grabbing a copy
of the theme since I'm trying to reduce the number of submodules. 