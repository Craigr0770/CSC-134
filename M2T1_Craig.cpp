#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // print receipt
    //price before tax


    cout << fixed << setprecision(2);
    cout << "M2T1" << endl;
    
    string mealname = "Happy Food";

    double mealP = 5.99;
    double taxPer = 0.08;
    double taxA = 0;
    double tp; // meal + tax

    taxA = mealP * taxPer;
    tp = mealP + taxA;


    // RECIPT
    cout << "Thank you for dining with us" << endl;
    cout << mealname << "\t" << "$" << mealP << endl;
    cout << "Tax (8%)" << "\t"<< "$" << taxA << endl;
    cout << "----------------------------" << endl;
    cout <<"Total" << "\t\t" << "$" << tp << endl;
    cout << endl;




    return 0;
}