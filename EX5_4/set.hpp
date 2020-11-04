#ifndef SET_HPP
#define SET_HPP

#include "hwlib.hpp"
#include <iostream>

//Template for a set.
template<typename T, int N>
class set {
private:

    int pointer = 0;
    std::array<T, N> intset;

public:

    set(){}

    //Method to add a number to the set
    void add( T number ) {
        if (pointer < N) {
            for (int i = 0; i < pointer; i++) {
                if (intset[i] == number) {
                    return;
                }
            }
            intset[pointer] = number;
            pointer++;
        }
    }

    //Method to remove a number out of the set
    void remove( T number ) {
        for (int i = 0; i < pointer; ++i) {
            if (intset[i] == number) {
                pointer--;
                for (int j = i; j < pointer; j++) {
                    intset[j] = intset[j+1];
                }
                break;
            }
        }
    }

    //Method to check if a number is in the set, returns boolean
    bool contains( T number ) {
        for (int i = 0; i < pointer; ++i) {
            if (intset[i] == number) {
                return true;
            }
        }
        return false;
    }
    
    //Method that returns the length of the set
    int length(){
        return N;
    }

    // Method that returns the max out of a set and else a 0
    T max(){
        T tmp = intset[0];
        if (pointer > 0) {
            for (int i = 1; i < pointer; ++i) {
                if (tmp < intset[i]) {
                    tmp = intset[i];
                }
            }
            return tmp;
        }
        return tmp;
    }  

    // //Method to print the set
    // friend std::ostream & operator<<(std::ostream & co, const set & setob) {
    //     for (int i = 0; i < setob.pointer; ++i) {
    //         co << setob.intset[i] << " ";
    //     }
    //     return co;
    // }
};

//Method to print the set
std::ostream & operator<<( std::ostream & lhs, const std::array<char, 3> & rhs){
    for( int i = 0; i < 3; i++){
        lhs << rhs[i] << ", ";
    }
    return lhs;
}

template< int charsize>
bool operator>( std::array<char, charsize> & lhs, std::array<char, charsize> & rhs ){
    char lhssize = 0;
    char rhssize = 0;
    for( int i = 0; i < charsize; i++ ){
        lhssize += lhs[i];
        rhssize += rhs[i];
    }
    return lhssize > rhssize;
}

#endif