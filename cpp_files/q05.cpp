/* Question 05:
Write a program in C++ to swap two numbers?

*/
#include <iostream>
using namespace std;

int main(void){

    // in this case i will use the 'int' type to do this.
    int number1 = 16, number2 = 25, temp_variable;

    cout << "Before swapping:" << endl;
    cout << "number1 = " << number1 << ", " << "number2 = " << number2 << endl;

    // we need to create temporarily variable.
    temp_variable = number1;
    number1 = number2;
    number2 = temp_variable;


    cout << "After swapping:" << endl;
    cout << "number1 = " << number1 << ", " << "number2 = " << number2 << endl;


    return 0;
}

