cmake_minimum_required(VERSION 3.20.0)

set(srcs 
    main.cpp
    kernel.hpp
)

set(cuda_srcs 
    kernel.cpp
)

set_property(SOURCE ${cuda_srcs} PROPERTY LANGUAGE CUDA)

add_executable(testApp ${srcs} ${cuda_srcs})
target_link_libraries(testApp PUBLIC testLib)