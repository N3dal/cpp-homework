/* Question 12:
Write a C++ program to swap first and last digits of any number?

*/
#include <iostream>
using namespace std;

int main(void){

    // note: max int number is '2147483647', any number above it,
    // it will cause a lot of errors, to avoid this i will use,
    // an 64-bit integer, and this increase the max number to: '18446744073709551616'.

    uint64_t usr_input=0, number=0, swapped_number=0;

    // i use int here because the last and first digit will,
    // be a number with one digit only so the int data type,
    // will more than enough.
    int last_digit, first_digit;




    cout << "Enter any number to swap the First and Last Digits: ";
    cin >> usr_input;

    number = usr_input;

    last_digit = usr_input % 10;




    int length = 1;

    while (usr_input > 10){
        length *= 10;
        usr_input /= 10;


    }
    
    first_digit = number / (length);




    swapped_number = (last_digit*length) + ((number%length)/10)*10 + first_digit;


    cout << "number before swapping: " << number << endl;
    cout << "number after swapping:  " << swapped_number << endl;


    cout << swapped_number << endl;











    return 0;
}

