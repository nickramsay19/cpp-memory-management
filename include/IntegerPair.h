#ifndef INTEGERPAIR_H
#define INTEGERPAIR_H

#include <iostream>

/*
    The IntegerPair class is a wrapper for two integers dynamically allocated in memory with safe disposal in mind.
*/
class IntegerPair {
public:
    IntegerPair(int _a, int _b);
    ~IntegerPair();
    
    void SetIntegerPair(int _a, int _b);
    int* GetA();
    int* GetB();

private:
    int* a;
    int* b;
};

#endif