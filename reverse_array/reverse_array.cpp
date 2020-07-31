#include<stdio.h>
#include <iostream>
#include <array>
using namespace std;


void print_array( int* array, int array_size ) {
    
    for ( int i = 0; i < array_size; i++ ) {

        cout << array[i] << " ";
    
    }

    cout << endl;
}


int* reverse_array( int* array, int array_size ) {

    // Store array values to a new address, so we don't mutate the original
    int *reversed_array = array;

    // Point to elements at the start and end of the array
    int *start_ptr = reversed_array;
    int *end_ptr = reversed_array + array_size - 1;
    
    // Until pointers converge at middle element
    while ( start_ptr < end_ptr ) {

        // Swap values at pointer addresses
        int temp = *start_ptr;
        *start_ptr = *end_ptr;
        *end_ptr = temp;

        // Increment/Decrement pointers
        start_ptr++;
        end_ptr--;
    }

    return reversed_array;
}


int main(void) {

    int a[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
    
    print_array(a, 8);

    int* b = reverse_array(a, 8);

    print_array(b, 8);

}