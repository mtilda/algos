#include<stdio.h>
#include <iostream>
using namespace std;

#define MAX_NUMBER 100

void fizzbuzz(int max_number) {
    for ( int i = 1; i <= max_number; i++ ) {
        if (!(i%15)) cout << "FizzBuzz";
        else if (!(i%3)) cout << "Fizz";
        else if (!(i%5)) cout << "Buzz";
        else cout << i;
        cout << endl;
    }
}

int main(void) {
    fizzbuzz(MAX_NUMBER);
}