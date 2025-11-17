//
// Created by grahanic001 on 11/17/2025.
//

#ifndef VECTOR_H
#define VECTOR_H


template <typename T, int N>
struct Vector {
    T* data[N];
    int length = N;

    Vector() = default;
    Vector(const T* otherData) {

    }
};



#endif //VECTOR_H
