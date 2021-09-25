/**
 * @file main.cpp
 * @brief CLI driver
 */

#include <iostream>

#include "kernel.hpp"

#include <testLib/testLib.hpp>

int main(int argc, char **argv) {
    auto const value = kernels::launch_simple_kernel();
    std::cout << "Kernel in exe, one = " << value << std::endl;

    auto const valueLib = testLib::call_simpleLib();
    std::cout << "Kernel in lib, two = " << valueLib << std::endl;
    return 0;
}
