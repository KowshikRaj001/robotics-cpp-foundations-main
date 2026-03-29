#include <iostream>
#include <assert.h>
#include "vector2.h"
using namespace std;

int main() {
    Vector2 a(0, 0);
    Vector2 b(0, 0);

    cin >> a.x >> a.y;  //Get the input for the vector a 
    cin >> b.x >> b.y;  //Get the input for the vector b

    Vector2 c = a + b; //Add the vector a to b
    Vector2 d = b - a; //Subtract vector from b to a
    Vector2 e = a * 2.0; //Multiply the vector a with scalar 2.0
    double f = a.dot(b);       //Calculate the dot product of vector a and vector b 
    double g = a.magnitude();  //Calculate the magnitude of vector a
    Vector2 h = a.normalize(); //Normalize the vector a
    double dist = a.distance(b); //Calculate the distance between vector a and vector b

    std::cout << c.x << " " << c.y << std::endl;
    std::cout << d.x << " " << d.y << std::endl;
    std::cout << e.x << " " << e.y << std::endl;
    std::cout << f << endl;
    std::cout << g << endl;
    std::cout << h.x << " " << h.y << std::endl;
    std::cout << dist << std::endl;

    assert(std::abs(a.magnitude() - 0) < 1e-9); // Check if the magnitude of vector v is 0
    
    return 0;
}