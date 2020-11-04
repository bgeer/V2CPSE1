#define CATCH_CONFIG_MAIN 
#include "/home/bas/Catch2/single_include/catch2/catch.hpp"
#include "set.hpp"

TEST_CASE( "MAX FUNCTION WITH CHARS" ){
    set<char, 10> s;
    s.add('D');
    s.add('c');
    s.add('y');
    s.add('P');
    REQUIRE( s.max() == 'y' ); 
}

TEST_CASE( "MAX FUNCTION WITH CHARS2" ){
    set<char, 10> s;
    s.add('R');
    s.add('C');
    s.add('A');
    s.add('Z');
    REQUIRE( s.max() == 'Z' ); 
}

TEST_CASE( "max char test" ){
    set<char, 10> s;
    s.add( 'a' );
    s.add( 'b' );
    REQUIRE( s.max() == 'b' );
}

TEST_CASE( "max int test" ){
    set<int, 10> s;
    s.add( 1 );
    s.add( 2 );
    REQUIRE( s.max() == 2 );
}

TEST_CASE( "std array char 3" ){
    set< std::array<char,3>, 10> s;
    s.add( {'W', 'T', 'F'});
    s.add( {'D', 'A', 'K'});
    s.add( {'T', 'A', 'K'});
    s.add( {'L', 'N', 'G'});
    std::stringstream output;
    output << s.max();
    REQUIRE( output.str() == "W, T, F, " );
}