/* Question 11:
Write a program in C++ to input a single digit number and print a rectangular form of,
4-columns and 6-rows?

*/
#include <iostream>
using namespace std;

int main(void){

    
    int usr_input = 0;

    cout << "Enter number with one digit: ";
    cin >> usr_input; 

    /* make sure to take one digit,
       maybe the user enter number,
       with more than one digit so,
       we will take the last digit only. */
    usr_input %= 10;

    // now print the rectangular.
    for (int i=0; i<6; i++){
        for (int j=0; j< 4; j++){

            if (i==0 || i==5 || j==0 || j==3){
                cout << usr_input << "";
            }
            else{
                cout << " ";
            }

        }
        cout << endl;
    }


    // cout << usr_input;


    return 0;
}

