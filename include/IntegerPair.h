#ifndef INTEGERPAIR_H
#define INTEGERPAIR_H

#include <iostream>

class IntegerPair {
public:
    IntegerPair(int _a, int _b);
    ~IntegerPair();

private:
    int* a;
    int* b;
};

#endif