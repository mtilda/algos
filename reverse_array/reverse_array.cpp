#include<stdio.h>
#include <iostream>
#include <array>
using namespace std;


void print_array( int* array, int array_size ) {
    
    for (int i = 0; i < array_size; i++) {

        cout << array[i] << " ";
    
    }

    cout << endl;
}

int* reverse_array( int* array, int array_size ) {

    int *reversed_array = array;

    int *start_ptr = reversed_array;
    int *end_ptr = reversed_array + array_size - 1;
    
    while( start_ptr < end_ptr ) {
        int temp = *start_ptr;
        *start_ptr = *end_ptr;
        *end_ptr = temp;
        start_ptr++;
        end_ptr--;
    }

    return reversed_array;
}

int main(void) {

    int a[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
    
    print_array(a, 8);

    int* b = reverse_array( a, 8);

    print_array(b, 8);
}