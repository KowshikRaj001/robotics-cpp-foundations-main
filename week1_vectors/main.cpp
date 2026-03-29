#include <iostream>
#include "vector2.h"

int main() {

    Vector2D v1(3, 4);
    Vector2D v2(1, 2);

    Vector2D sum = v1 + v2;
    Vector2D diff = v1 - v2;
    Vector2D scaled = v1 * 2.0;

    std::cout << "Sum: "; sum.print();
    std::cout << "Difference: "; diff.print();
    std::cout << "Scaled: "; scaled.print();

    std::cout << "Dot: " << v1.dot(v2) << std::endl;
    std::cout << "Cross: " << v1.cross(v2) << std::endl;

    std::cout << "Magnitude v1: " << v1.magnitude() << std::endl;

    std::cout << "Angle: " << v1.angle(v2) << std::endl;

    Vector2D proj = v1.projectOnto(v2);
    std::cout << "Projection of v1 onto v2: ";
    proj.print();

    return 0;
}