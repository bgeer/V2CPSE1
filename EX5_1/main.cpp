#define CATCH_CONFIG_MAIN 
#include "/home/bas/Catch2/single_include/catch2/catch.hpp"
#include "set.hpp"

TEST_CASE( "SET ADD FUNCTION" ){
    auto s = set();
    s.add(42);
    s.add(12);
    s.add(55);
    s.add(9);
    REQUIRE(s.contains(12) == true);
    REQUIRE(s.contains(42) == true);
}

TEST_CASE( "SET REMOVE FUNCTION" ){
    auto s = set();
    s.add(42);
    s.add(12);
    s.add(55);
    s.add(9);
    s.remove(55);
    REQUIRE(s.contains(55) == false);
    REQUIRE(s.contains(12) == true);
}