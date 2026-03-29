#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

class Vector2D {
public:
    double x, y;

    // Constructors
    Vector2D();
    Vector2D(double xVal, double yVal);

    // Basic operations
    Vector2D operator+(const Vector2D& v) const;
    Vector2D operator-(const Vector2D& v) const;
    Vector2D operator*(double scalar) const;

    // Dot and cross
    double dot(const Vector2D& v) const;
    double cross(const Vector2D& v) const;

    // Magnitude
    double magnitude() const;
    double squaredMagnitude() const;

    // Normalize
    Vector2D normalize() const;

    // Angle between vectors (radians)
    double angle(const Vector2D& v) const;

    // Projection of this onto v
    Vector2D projectOnto(const Vector2D& v) const;

    // Print
    void print() const;
};

#endif