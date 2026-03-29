#include "vector2.h"
#include <cmath>

Vector2::Vector2(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector2 Vector2::operator+(const Vector2& other) const {
    return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator-(const Vector2& other) const {
    return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator*(double scalar) const {
    return Vector2(x * scalar, y * scalar);
}

double Vector2::dot(const Vector2& other) const {
    return (x * other.x + y * other.y);
}

double Vector2::magnitude() const {
    return std::sqrt(x * x + y * y);
}

Vector2 Vector2::normalize() const {
    double mag = magnitude();
    if (mag == 0) {
        return Vector2(0, 0); // Return a zero vector if the magnitude is zero
    }
    return Vector2(x / mag, y / mag);
}

double Vector2::distance(const Vector2& other) const {
    return std::sqrt((x-other.x)*(x-other.x) + (y-other.y)*(y-other.y));
}