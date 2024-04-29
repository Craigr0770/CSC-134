#include <iostream>
using namespace std;
#include "m6lab1_utils.h"

/*
CSC 134
m6lab1 - buck shot
craig
handle loading and looking at shotgun magazine.
max 6 shells, they live , blanks , or empty*/

int magazine[MAX_SHELLS] = {LIVE, LIVE, BLANK, BLANK, EMPTY, EMPTY};

int main() {

    cout << "M6LAB" << endl;

    cout << "The magazine holds:" << endl;

    for (int i=0; i < MAX_SHELLS; i++) {
        int shell = magazine[i];
        string name = shell_name(shell);
        cout << name << ", ";
    }
    cout << endl;
    for (int shell: magazine) {
        cout << shell_name(shell) << " ,";
    }
    cout << endl;
}