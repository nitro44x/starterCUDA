/**
 * @file main.cpp
 * @brief CLI driver
 */

#include <iostream>

#include "kernel.hpp"

#include <testLib/testLib.hpp>

int main(int argc, char **argv) {
    auto d = launch_simple_kernel();
    std::cout << "d = " << d << std::endl;

    auto dd = testLib::call_simpleLib();
    std::cout << "dd = " << dd << std::endl;
    return 0;
}