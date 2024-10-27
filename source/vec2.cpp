#include "cppvec/vec2.h"

template <typename T>
cppvec::Vec2<T> cppvec::Vec2<T>::operator+(const cppvec::Vec2<T>& other) const {
    return {this->x + other.x, y + other.y};
}

template <typename T>
cppvec::Vec2<T> cppvec::Vec2<T>::operator-(const cppvec::Vec2<T>& other) const {
    return {this->x - other.x, y - other.y};
}

template <typename T>
cppvec::Vec2<T> cppvec::Vec2<T>::operator*(const uint32_t scalar) const {
    return {this->x * scalar, y * scalar};
}