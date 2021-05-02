#include <iostream>
#include "../include/IntegerPair.h"

using namespace std;

int main() {

    // create an integer pair
    // this will create two integers in memory for us to access via ip or otherwise
    IntegerPair ip = IntegerPair(1,43);

    // get a handle on a
    int* a = ip.GetA();
    *a = -5;

    // print a from ip
    cout << *ip.GetA() << endl; // -> -5

    // return success
    // here, ip's deconstructor will be called automatically, performing required memory deallocation
    return 0;
}