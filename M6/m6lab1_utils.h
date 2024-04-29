#ifndef M6LAB1_UTILITY_H
#define M6Lab1_UTILITY_H
// header files let you add mor fuctions
#include <iostream>
using namespace std;

const int MAX_SHELLS = 6;
const int EMPTY = 0;
const int BLANK = 1;
const int LIVE = 2;

string shell_name(int shell);


string shell_name(int shell) {

    string name;
    if (shell == EMPTY) {
        name = "Empty";
    }
    if (shell == BLANK) { 
        name = "Blank";
    }
    if (shell == LIVE) {
        name = "Live";
    }
    return name;
}

#endif // M6LAB1_UTILITY_H
