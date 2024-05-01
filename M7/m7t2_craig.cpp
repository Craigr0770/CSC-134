#include <iostream>
using namespace std;
#include "Rectangle.h"



int main(){
    cout << "M7T2" << endl;

    Rectangle r;

    double length;
    double width , area;
    string text;

    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter charater or emoji: ";
    cin >> text;

    r.setWidth(width);
    r.setLength(length);
    r.setChar(text);

    cout << "Rectangle is:" << endl;
    cout << r.getLength() << " by " << r.getWidth() << endl;
    cout << "Rectangle area = " << r.getArea() << endl;
    cout << "Printing the rectangle" << endl;
    r.drawRectangle();
    return 0;
}