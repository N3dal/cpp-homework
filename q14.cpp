/* Question 14:
Write a C++ program to print all natural numbers from 1 to N using while loop?

*/
#include <iostream>
using namespace std;

int main(void){

    int usr_input = 0;

    int natural_number = 1;

    cout << "Enter max number to print into it: ";
    cin >> usr_input;

    while (natural_number <= usr_input){
        cout << natural_number ++ << endl;
    }


    return 0;
}

