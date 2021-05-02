#include "../include/IntegerPair.h"

#include <iostream>

IntegerPair::IntegerPair(int _a, int _b) {

    std::cout << "Allocating a and b." << std::endl;

    // allocate memory for a and b
    a = new int;
    b = new int;

    // assign the given values at a and b
    *a = _a;
    *b = _b;
}

IntegerPair::~IntegerPair() {

    std::cout << "Deallocating a and b." << std::endl;

    // delete and free a and b ints from memory
    delete a;
    delete b;
}

void IntegerPair::SetIntegerPair(int _a, int _b){
    *a = _a;
    *b = _b;
}

int* IntegerPair::GetA(){
    return a;
}

int* IntegerPair::GetB(){
    return b;
}