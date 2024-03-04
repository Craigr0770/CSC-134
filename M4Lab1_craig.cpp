#include <iostream>
using namespace std;
/*
csc 134
M4LAB1
Rome craig
3/4/24
Ask user for whight
draw rectangle
using namespace std;
*/

int main()
{
    cout << "ASCII Rectangles" << endl;
    cout << "*" << endl;

    int width = 6;
    int height =5;


    for (int i=0; i<width; i++) {
        cout << "# ";
    }
        cout << endl;
        cout << "print " << height << " lines" <<endl;
        for (int i=0; i<height; i++) {
            cout << "#" << endl;
    }
        cout << "Do both -- print rectangle" <<endl;
        cout << endl;
        for (int i=0; i<height; i++) {
            for (int j=0; j<width; j++) {
                cout << "# ";
        }
        cout << endl;
    }
    return 0;
}
