cmake_minimum_required(VERSION 3.20.0)

set(include_dir ${CMAKE_SOURCE_DIR}/include)
set(srcs 
    ${include_dir}/testLib/testLib.hpp
)

set(cuda_srcs 
    testLib.cpp
)

set_property(SOURCE ${cuda_srcs} PROPERTY LANGUAGE CUDA)

add_library(testLib ${srcs} ${cuda_srcs})
target_include_directories(testLib PUBLIC ${CMAKE_SOURCE_DIR}/include)