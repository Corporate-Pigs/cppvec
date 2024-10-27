#pragma once

#include <cstdint>

namespace cppvec {
template <typename T>
struct Vec2 {
    T x, y;
    Vec2 operator+(const Vec2& other) const;
    Vec2 operator-(const Vec2& other) const;
    Vec2 operator*(const uint32_t scalar) const;
};
}  // namespace cppvec
