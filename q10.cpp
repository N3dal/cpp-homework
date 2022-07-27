/* Question 10:
Write a program in C++ that converts kilometers per hour to miles per hour?

*/
#include <iostream>
using namespace std;

int main(void){

    // 1 kilometer/hour = 0.6213711922 mile/hour;
    const float MPH = 0.6213711922;

    float value_in_kph = 132;
    float value_in_mph = 0.0;

    value_in_mph = value_in_kph * MPH;

    cout << value_in_kph << "kph equal to " << value_in_mph << "mph" << endl;



    return 0;
}

