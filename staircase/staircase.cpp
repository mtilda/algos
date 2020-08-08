#include <iostream>
#include <string>
using namespace std;

#define STAIRCASE_LENGTH 10

int main() {
    string str (STAIRCASE_LENGTH, 32);
    for( int i = STAIRCASE_LENGTH - 1; i >= 0; i-- ) {
        str[i] = '#';
        cout << str << endl;
    }
}