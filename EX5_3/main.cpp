#define CATCH_CONFIG_MAIN 
#include "/home/bas/Catch2/single_include/catch2/catch.hpp"
#include "set.hpp"

TEST_CASE( "SET DOUBLE TEMPLATE" ){
    set<double, 10> s;
    s.add(42.45435);
    s.add(12.564654);
    s.add(55.324324);
    s.add(9.234324);
    REQUIRE(s.contains(12.564654) == true);
    REQUIRE(s.contains(42.45435) == true);
}

TEST_CASE( "SET INT LENGTH TEMPLATE" ){
    set<int, 25> s;
    for (int i = 0; i < 30; ++i) {
        s.add(i*4);
    }
    
    s.remove(16);
    s.remove(21);
    REQUIRE(s.contains(28) == true);
    REQUIRE(s.contains(19) == false);
}

TEST_CASE("SET MAX METHOD"){
    set<int, 10> s;
    s.add(10);
    s.add(5);
    s.add(15);
    s.add(16);
    REQUIRE(s.max() == 16);
}