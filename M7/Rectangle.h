#ifndef RECTANGLE_H
#define RECYANGLE_H
#include <iostream>
using namespace std;

// Class declartion
class Rectangle
{
private:
    double width;
    double length;
    string text;
public:
    void setLength(double);
    void setWidth(double);
    void setChar(string);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
    void drawRectangle() const;
};

void Rectangle::setLength(double len) {
    length = len;
}

void Rectangle::setWidth(double w) {
    width = w;
}
double Rectangle::getWidth() const {
    return width;
}
double Rectangle::getLength() const {
    return length;
}
double Rectangle::getArea() const {
    double area = length * width;
    return area;
}
void Rectangle::drawRectangle() const {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) {
            cout << text;
        }
        cout << endl;
    }
}
void Rectangle::setChar(string ch) {
    text = ch;
}
#endif // RECTANGLE_H