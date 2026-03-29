#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
public:
    double x;
    double y;
    Vector2();
    Vector2(double x, double y);

    Vector2 operator+(const Vector2& v) const;
    Vector2 operator-(const Vector2& v) const;
    Vector2 operator*(double scalar) const;
    Vector2 normalize() const;
    double dot(const Vector2& v) const;
    double magnitude() const;
    double distance(const Vector2& v) const;
    

};

#endif