/* Question 08:
Write a program in C++ to calculate the volume of cylinder?

*/
#include <iostream>
using namespace std;

int main(void){


    // we can calculate the volume of cylinder using this formula:
    // π*r^2*h;

    // change this var to the desire value.
    float radius = 12.34, height=3.3, volume = 0;
    const float PI = 3.14159265359; // or use "#define PI 3.14159265359" if you want.

    // make sure that the four and three are in form of float.
    volume = PI*(radius*radius)*height;


    cout << "Cylinder with radius of \'" << radius << " m\' and height of \'" << height << " m\' will have volume of \'" << volume << " m^3\'" << endl;

    return 0;
}

