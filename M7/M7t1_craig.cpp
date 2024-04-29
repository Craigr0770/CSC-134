#include <iostream>
using namespace std;
#include "reasturant.h"

int main() {
    cout << "Reasturant Review Program" << endl;

    Restaurant breakfast = Restaurant("Waffle House", 3.0);

    cout << breakfast.getName() << endl;
    cout << breakfast.getRating() << endl;

    

    Restaurant lunch = Restaurant("Mcalister's Deli" , 4.0);

    cout << lunch.getName() << endl;
    cout << lunch.getRating() << endl;

    Restaurant dinner = Restaurant("Mi casitas" , 4.5);

    cout << dinner.getName() << endl;
    cout << dinner.getRating() << endl;







    return 0;
   
}