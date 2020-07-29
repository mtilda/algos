#include<stdio.h>
#include <iostream>
using namespace std;

#define MAX_NUMBER 100

int main(void) {
    for ( int i = 1; i <= MAX_NUMBER; i++ ) {
        if (!(i%15)) cout << "FizzBuzz";
        else if (!(i%3)) cout << "Fizz";
        else if (!(i%5)) cout << "Buzz";
        else cout << i;
        cout << endl;
    }
}