/* Question 13:
Write a C++ program to which reads n digits chosen from 0 to 9,
and counts the number of combinations where the sum of the digit equals the given number?

*/
#include <iostream>
using namespace std;

int main(void){


    // note: max int number is '2147483647', any number above it,
    // it will cause a lot of errors, to avoid this i will use,
    // an 64-bit integer, and this increase the max number to: '18446744073709551616'.
    uint64_t usr_input = 0;


    int sum = 0;


    cout << "Enter any number: ";
    cin >> usr_input;

    while (usr_input){

        sum += (usr_input % 10);
        usr_input /= 10;
    }


    cout << "the sum of the number digits is: " << sum << endl;

    return 0;
}

