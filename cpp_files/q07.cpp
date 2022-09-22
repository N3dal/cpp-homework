/* Question 07:
Write a program in C++ to calculate the volume of a cube?

*/
#include <iostream>
using namespace std;

int main(void){


    // we can calculate the volume of cube using this formula:
    // L^3

    // change this var to the desire value.
    float l = 12.34, volume = 0;


    // make sure that the four and three are in form of float.
    volume = l * l * l; 


    cout << "Cube with Side of length \'" << l << "\' will have volume of \'" << volume << " m^3\'" << endl;

    return 0;
}

