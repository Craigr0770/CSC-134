/*
CSC 134
M1LAB - Apple sales
Rome Craig
1/22/24
*/
#include <iostream>
using namespace std;

int main() {
    // apple sales program
    string name = "Rome";
    int num_apples = 97;
    double price_per_apple = 0.25;

    // cal price for all apples
    // TODO
    double total_price = num_apples * price_per_apple;

    // print the output
    cout << "Welcome to the "<< name << "Apple Farm. " << endl;
    cout << "We have " << num_apples << " apples." << endl;
    cout << "Each on cost $" << price_per_apple << endl;
    cout << "For a total cost of $" << total_price << endl;
    cout << endl;

    return 0;
}
