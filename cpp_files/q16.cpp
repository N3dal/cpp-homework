/* Question 16:
    Write a C++ program to count number of digits in a number?
*/
#include <iostream>
using namespace std;

int main(void)
{

    int usr_input = 0;

    // get the user input.

    cout << "Enter any number to count its digits: ";
    cin >> usr_input;

    int count = 0;
    int usr_input_copy = usr_input;

    while (usr_input > 0)
    {
        count++;
        usr_input /= 10;
    }

    cout << "the digits count for \'" << usr_input_copy << "\' is : " << count;

    return 0;
}
