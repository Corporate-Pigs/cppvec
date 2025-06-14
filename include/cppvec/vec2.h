#pragma once

#include <cstdint>

namespace cppvec
{

template <typename T>
struct Vec2
{
    Vec2(T x, T y) : x(x), y(y) {}
    Vec2() : x(0), y(0) {}
    T x, y;

    bool operator==(const Vec2& other) const { return x == other.x && y == other.y; }
    
    bool operator!=(const Vec2& other) const { return x != other.x || y != other.y; }

    Vec2 operator+(const Vec2& other) const { return {this->x + other.x, y + other.y}; }

    Vec2& operator+=(const Vec2& other)
    {
        x += other.x;
        y += other.y;
        return *this;
    }

    Vec2 operator-(const Vec2& other) const { return {this->x - other.x, y - other.y}; }
    Vec2& operator-=(const Vec2& other)
    {
        x -= other.x;
        y -= other.y;
        return *this;
    }

    Vec2 operator*(const Vec2& other) const { return {this->x * other.x, y * other.y}; }
    Vec2& operator*=(const Vec2& other)
    {
        x *= other.x;
        y *= other.y;
        return *this;
    }

    Vec2 operator/(const Vec2& other) const { return {this->x / other.x, y / other.y}; }
    Vec2& operator/=(const Vec2& other)
    {
        x /= other.x;
        y /= other.y;
        return *this;
    }

    template <typename S>
    Vec2 operator+=(const S scalar)
    {
        return {x + scalar, y + scalar};
    }

    template <typename S>
    Vec2 operator*(const S scalar) const
    {
        return {x * scalar, y * scalar};
    }

    template <typename S>
    Vec2 operator/(const S scalar) const
    {
        return {x / scalar, y / scalar};
    }
};
}  // namespace cppvec
