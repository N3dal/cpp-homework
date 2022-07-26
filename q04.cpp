/* Question 04:
Write a program in C++ to add two numbers accept through keyboard?

*/
#include <iostream>
using namespace std;

int main(void){

    // by default i will consider the numbers type is float,
    // and i initialize them with zero. 
    float first_num = 0, second_num = 0, nums_sum = 0;

    cout << "Enter first number: ";
    cin >> first_num;

    cout << "Enter second number: ";
    cin >> second_num;

    nums_sum = first_num + second_num;

    cout << "sum of the two number = " << nums_sum << endl;



    return 0;
}

