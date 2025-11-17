//
// Created by grahanic001 on 11/17/2025.
//

#include <sstream>

#ifndef VECTOR_H
#define VECTOR_H


template <typename T, int N>
struct Vector {
    T data[N];
    int length = N;

    Vector() = default;
    explicit Vector(const T *otherData) {
        memcpy(&data, otherData, sizeof(T) * N);
    }

    std::string print() {
        std::stringstream ss;
        ss << "<" << data[0];
        for (int i = 1; i < N; i++) {
            ss << ", " << data[i];
        }
        ss << ">";
        return ss.str();
    }
};



#endif //VECTOR_H
