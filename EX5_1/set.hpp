#ifndef SET_HPP
#define SET_HPP

#include "hwlib.hpp"
#include <iostream>

class set {
private:

    int pointer = 0;
    int maxInts = 10;
    int intset[10] = {};

public:

    set(){}
    //Method to add a number to the set
    void add( int number ) {
        if (pointer < maxInts) {
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
    void remove( int number ) {
        for (int i = 0; i < pointer; ++i) {
            if (intset[i] == number) {
                for (int j = i; j < pointer; j++) {
                    intset[j] = intset[j+1];
                }
                pointer--;
                break;
            }
        }
    }
    //Method to check if a number is in the set, returns boolean
    bool contains( int number ) {
        for (int i = 0; i < pointer; ++i) {
            if (intset[i] == number) {
                return true;
            }
        }
        return false;
    }
    //Method to print the set
    friend std::ostream & operator<<(std::ostream & co, const set & setob) {
        for (int i = 0; i < setob.pointer; ++i) {
            co << setob.intset[i] << " ";
        }
        return co;
    }
};

#endif