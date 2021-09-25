#include <catch2/catch.hpp>

#include <testLib/testLib.hpp>

TEST_CASE( "Lib gives correct number", "[simple]" ) {
    auto const valueLib = testLib::call_simpleLib();
    REQUIRE( valueLib == 2 );
}
