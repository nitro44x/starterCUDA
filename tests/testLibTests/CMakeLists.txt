cmake_minimum_required(VERSION 3.20.0)

set(srcs 
    test.cpp
    main.cpp
)

add_executable(testLibTests ${srcs})
target_link_libraries(testLibTests PRIVATE testLib)
target_link_libraries(testLibTests PRIVATE Catch2::Catch2)

catch_discover_tests(testLibTests)