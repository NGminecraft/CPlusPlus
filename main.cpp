//
// Created by grahanic001 on 11/17/2025.
//

#include <iostream>
#include "Vector.h"

int main() {
    int test[3] = {1, 2, 3};
    Vector<int, 3> Hello(test);
    std::cout << "Hello: " << Hello.print() << std::endl;

    std::cout << "Hello World!" << std::endl;
    return 0;
}