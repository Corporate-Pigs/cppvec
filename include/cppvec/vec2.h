#pragma once

#include <cstdint>

namespace cppvec {

template <typename T>
struct Vec2 {
    T x, y;
    Vec2 operator+(const Vec2& other) const { return {this->x + other.x, y + other.y}; }
    Vec2& operator+=(const Vec2& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    Vec2 operator-(const Vec2& other) const { return {this->x - other.x, y - other.y}; }
    Vec2& operator-=(const Vec2& other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }

    template <typename S>
    Vec2 operator*(const S scalar) const {
        return {x * scalar, y * scalar};
    }

    template <typename S>
    Vec2 operator/(const S scalar) const {
        return {x / scalar, y / scalar};
    }
};
}  // namespace cppvec
