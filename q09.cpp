/* Question 09:
Write a program in C++ that converts temperature in Celsius to Fahrenheit?

*/
#include <iostream>
using namespace std;

int main(void){

    float temperature_in_celsius = 32.8;
    float temperature_in_fahrenheit = 0;

    temperature_in_fahrenheit = temperature_in_celsius + 32.0;


    cout << temperature_in_celsius << "C" << " in Fahrenheit = " << temperature_in_fahrenheit << "F" << endl;


    return 0;
}

