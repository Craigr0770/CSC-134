

#include <iostream>
using namespace std;

int main() {
    double len1;
    double wid1;
    double hieg1;
    double area1;
    string rec1 ;


    double len2;
    double wid2;
    double hieg2;
    double area2;
    string rec2;


    

    cout << "What's the length of your rectangle?  ";
    cin >> len1;
    cout << "What's the width of your rectangle?  ";
    cin >> wid1;
    cout << "Name your first rectangle: ";
    cin >> rec1;
    
    area1 = len1 * wid1;

    cout << "-------------------" << endl;

    cout << "What's the length of your rectangle?  ";
    cin >> len2;
    cout << "What's the width of your rectangle?  ";
    cin >> wid2;
    cout << "Name your second rectangle: ";
    cin >> rec2;

    area2 = len2 * wid2;

    cout << "-------------------" << endl;

    cout << "The area of " << rec1 << " is -->" << area1 << endl;

    cout << "-------------------" << endl;

    cout << "The area of " << rec2 << " is -->" << area2 << endl;

    cout << "-------------------" << endl;

    if(area1 > area2) {
        cout << rec1 << " has the larger area";
    } else if ( area2 > area1 ) {
        cout << rec2 << " has the larger area";
    } else {cout << rec1 << " and " << rec2 << " have the same area.";}





   


   return 0;
   
}