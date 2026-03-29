#include "vector2.h"
#include <cmath>
#include <stdexcept>

// Constructors
Vector2D::Vector2D() : x(0), y(0) {}

Vector2D::Vector2D(double xVal, double yVal) : x(xVal), y(yVal) {}

// Operator Overloading
Vector2D Vector2D::operator+(const Vector2D& v) const {
    return Vector2D(x + v.x, y + v.y);
}

Vector2D Vector2D::operator-(const Vector2D& v) const {
    return Vector2D(x - v.x, y - v.y);
}

Vector2D Vector2D::operator*(double scalar) const {
    return Vector2D(x * scalar, y * scalar);
}

// Dot product
double Vector2D::dot(const Vector2D& v) const {
    return x * v.x + y * v.y;
}

// Cross product (2D returns scalar)
double Vector2D::cross(const Vector2D& v) const {
    return x * v.y - y * v.x;
}

// Magnitude
double Vector2D::magnitude() const {
    return std::sqrt(x * x + y * y);
}

double Vector2D::squaredMagnitude() const {
    return x * x + y * y;
}

// Normalize
Vector2D Vector2D::normalize() const {
    double mag = magnitude();
    if (mag == 0) {
        throw std::runtime_error("Cannot normalize zero vector");
    }
    return Vector2D(x / mag, y / mag);
}

// Angle between vectors
double Vector2D::angle(const Vector2D& v) const {
    double dotProd = dot(v);
    double mags = magnitude() * v.magnitude();

    if (mags == 0) {
        throw std::runtime_error("Angle undefined for zero vector");
    }

    return std::acos(dotProd / mags);
}

// Projection
Vector2D Vector2D::projectOnto(const Vector2D& v) const {
    double denom = v.squaredMagnitude();
    if (denom == 0) {
        throw std::runtime_error("Cannot project onto zero vector");
    }

    double scale = dot(v) / denom;
    return v * scale;
}

// Print
void Vector2D::print() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}