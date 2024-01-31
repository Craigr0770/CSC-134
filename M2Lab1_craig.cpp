

#include <iostream>
using namespace std;

int main() {
    double len;
    double wid;
    double hieg;
    double volume;
    // contants dont change
    // cost_per_sqaure foot
    // charge per cubic foot
    const double costpcf = 0.23;
    const double cpcf = 0.5;
    // math stuff
    double cost;
    double charge;
    double profit;

    cout<< "M1T2 - Box corp";

    cout << "What's the length?  ";
    cin >> len;
    cout << "What's the width?  ";
    cin >> wid;
    cout << "What's the height? ";
    cin >> hieg;
    
    volume = len * wid * hieg;
    cost = volume * costpcf;
    charge = volume * cpcf;
    profit = charge - cost;

    cout << "The Volume of the rectangle is: " << volume << endl;
    cout << "The cost to build it is $" << cost << endl;
    cout << "You can charge it to customers for $" << charge << endl;
    cout << "You will make $" << profit << " in profit" << endl;




   


   return 0;
   
}



