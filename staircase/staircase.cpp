#include <iostream>
#include <string>
using namespace std;

#define STAIRCASE_LENGTH 10

int main() {

    // DEFINE string to represent a single step in the staircase
    string str (STAIRCASE_LENGTH, 32);

    // FOR EACH step of the staircase
    for( int i = STAIRCASE_LENGTH - 1; i >= 0; i-- ) {

        // REPLACE the final space in the string with a #
        str[i] = '#';

        // PRINT the current step
        cout << str << endl;
    }
}