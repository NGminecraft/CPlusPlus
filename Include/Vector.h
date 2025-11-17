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
    explicit Vector(const T *otherData) {
        memcpy(data, otherData, sizeof(T) * N);
    }
};



#endif //VECTOR_H
