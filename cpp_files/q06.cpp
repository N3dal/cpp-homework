/* Question 06:
Write a program in C++ to calculate the volume of a sphere?


*/
#include <iostream>
using namespace std;

int main(void){

    // we can calculate the volume of sphere using this formula:
    // (4/3)πr^3;

    // change this var to the desire value.
    float radius = 12.34, volume = 0;
    const float PI = 3.14159265359; // or use "#define PI 3.14159265359" if you want.

    // make sure that the four and three are in form of float.
    volume = (4.0/3.0)*PI*(radius*radius*radius);


    cout << "Sphere with radius of \'" << radius << "\' will have volume of \'" << volume << " m^3\'" << endl;

    



    return 0;
}

