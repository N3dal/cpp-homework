/* Question 15:
Write a C++ program to print all even numbers between 1 to 100,
using while loop?

*/
#include <iostream>
using namespace std;

int main(void){

    // the even number in this case start from 2;
    int even_number = 2;


    while (even_number <= 100){

        cout << even_number << endl;

        even_number += 2;

    }


    return 0;
}

