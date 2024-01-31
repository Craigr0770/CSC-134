/*
Rome Craig
CSC 134
M2T2 - apples sales
1/23/24
*/ 
#include <iostream>
using namespace std;

int main() {
    string name;
    int num_apples;
    double PPapple;
    double total;


   
   
    cout << "M2T2" << endl;
    cout << "What's your name? "; 
    
    cin >> name;
    cout << "It's a pleasure to meet you "<< name  << endl;
    
   
    cout << "How much many apples you want? ";
    cin >> num_apples ;
    cout <<"How much for each apple? ";
    cin >> PPapple ;
    total = num_apples * PPapple;

    /* recipt*/
    cout << "------------------------------" << endl;
    cout << "Thank you for shopping with us" << endl;
    cout << "Your buying " << num_apples << " apples." << endl;
    cout << "Each with the cost of $" << PPapple << endl;
    cout << "For a total cost of $" << total << endl;
    cout << "------------------------------" << endl;

    cout << endl;


    
    return 0;
}