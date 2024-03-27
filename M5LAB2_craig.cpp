// CSC 134

// M5LAB2
// Craig
// 3/27/24
//calc the area of an rectangle

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double calArea(double length, double width);
double getLength();
double getWidth();
double getArea();
void displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = calArea(length, width);

   

   
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double calArea (double length, double width) {
    // area is length times width
    double area = length * width;
    return area;

}
double getLength(){
     double length;
    cout << "What's your rectangle Length" << endl;
   cin >> length; 
   return length;
}

double getWidth(){
     double width;
    cout << "What's your rectangle Width" << endl;
   cin >> width;
   return width; 
}

void displayData(double length, double width, double area){
    cout << "---------------------" << endl;
    cout << "The legth of the rectangles is : " << length << endl;
    cout << "---------------------" << endl;
    cout << "The width of the rectangles is : " << width << endl;
    cout << "---------------------" << endl;
    cout << "The area of the rectangles is : " << area << endl;
}