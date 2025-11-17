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
    template <typename... Args>
    explicit Vector(T firstArg, Args... everythingElse) {
        buildVariadic(0, firstArg, everythingElse...);
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

private:
    template <typename... Args>
    void buildVariadic(int index, T arg, Args... everythingElse) {
        data[index] = arg;
        buildVariadic(index + 1, arg, everythingElse...);
    }
};

template <typename T>
struct Vec4 : public Vector<T, 4> {
    Vec4() = default;
    explicit Vec4(const T *otherData) : Vector<T, 4>(otherData) {}
};

template <typename T>
struct Vec3 : public Vector<T, 3> {
    Vec3() = default;
    explicit Vec3(const T *otherData) : Vector<T, 3>(otherData) {}
    template <typename... Args>
    explicit Vec3(T firstArg, Args... everythingElse) : Vector<T, 3>(firstArg, everythingElse...) {}
};

struct RGBA : public Vec4<int> {
    RGBA() = default;
    explicit RGBA(const int *otherData) : Vec4<int>(otherData) {}
};

struct RGB : public Vec3<int> {
    RGB() = default;
    explicit RGB(const int *otherData) : Vec3<int>(otherData) {}
    template <typename... Args>
    explicit RGB(int firstArg, Args... everythingElse) : Vec3<int>(firstArg, everythingElse...) {}
};

#endif //VECTOR_H
