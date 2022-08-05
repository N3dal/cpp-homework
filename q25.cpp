/* Question 25:
Write a C++ program to count frequency of each element in an array?

*/
#include <iostream>
using namespace std;

int in_array(int array[], int number, int array_length);
int count(int array[], int element, int array_length);


int main(void){


    int my_array[15] = {1, 2, 3, 3, 5, 5, 5, 6, 8, 8 , 8 ,8, 1, 1, 6};


    // first find the unique elements in simple words create a set.
    int unique_elements[15];
    
    // unique element index count;
    int u_count = 0;

    unique_elements[u_count] = my_array[u_count];
    u_count++;

    for (int i=0; i<15; i++){

        if (in_array(unique_elements, my_array[i], 15)){
            continue;
        }
        else{
            unique_elements[u_count] = my_array[i];
            u_count++;
        }

    }

    for (int i=0; i<u_count; i++){
        

        cout << unique_elements[i] << " frequency is: " << count(my_array, unique_elements[i], 15) << endl;


    }




    return 0;
}



int in_array(int array[], int number, int array_length){
    /*
    return "true aka 1" if the number in the array other wise return "false aka 0";
    */

    for (int i=0; i<array_length; i++){

        if (array[i] == number){
            return 1;
        }

    }

    return 0;

}

int count(int array[], int element, int array_length){
    /*
    return the element count in the array.
    */

    int count = 0;

    for (int i=0; i<array_length; i++){


        if (array[i]==element){
            count++;
        }
    }

    return count;
}
