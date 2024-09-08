#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <cmath>

struct Vector2D {
    float x, y;

    Vector2D(float x = 0, float y = 0) : x(x), y(y) {}

    // 向量加法
    Vector2D operator+(const Vector2D& v) const {
        return Vector2D(x + v.x, y + v.y);
    }

    // 向量减法
    Vector2D operator-(const Vector2D& v) const {
        return Vector2D(x - v.x, y - v.y);
    }

    // 标量乘法
    Vector2D operator*(float scalar) const {
        return Vector2D(x * scalar, y * scalar);
    }

    // 计算向量的长度
    float length() const {
        return std::sqrt(x * x + y * y);
    }
};

#endif // VECTOR2D_H

