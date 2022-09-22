
/* Question 03:
Write a program in C++ to display various type of arithmetic C++ operations,
using mixed data type?

*/

#include <iostream>
using namespace std;

int main(void){

    int int_type_positive = 12;
    int int_type_negative = -10;

    uint8_t eight_bit_int = 12; // value between 0~255 if it's unsigned.
    uint16_t sixteen_bit_int = 1000; // value between 0~65536 if it's unsigned.
    uint32_t thirty_two_bit_int = 100000; // value between 0~4294967296 if it's unsigned. 
    uint64_t sixty_four_bit_int = 100000000000000000; // value between 0~18446744073709551616 if it's unsigned and it the same as 'int'.

    const float PI = 3.14;
    const float e = 2.7;
    float float_type_negative = -321.7732;

    bool bool_type_1 = true;
    bool bool_type_0 = false;

    cout << int_type_negative + int_type_positive << endl;

    cout << int_type_negative * int_type_positive << endl;
    
    cout << int_type_negative / int_type_positive << endl;
    
    cout << int_type_negative - int_type_positive << endl;
    
    cout << int_type_negative + float_type_negative << endl;
    
    cout << int_type_negative * float_type_negative<< endl;
    
    cout << PI / int_type_positive << endl;
    
    cout << int_type_negative - e << endl;
    
    cout << int_type_negative + int_type_positive << endl;
    
    // we can do any math operation on boolean types,
    // because the compiler will evaluated them to integer before doing anything.
    cout << bool_type_0 * bool_type_1 << endl;
    
    cout << int_type_negative / int_type_positive << endl;
    
    cout << int_type_negative - int_type_positive << endl;
    
    cout << bool_type_1 + bool_type_1 << endl;

    cout << eight_bit_int + sixteen_bit_int << endl;

    cout << eight_bit_int * sixteen_bit_int << endl;
    
    cout << e / sixty_four_bit_int << endl;
    
    cout << bool_type_0 - sixteen_bit_int << endl;
    
    cout << eight_bit_int + PI << endl;
    

    return 0;
}

