#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int roll, die1, die2, seed;
    cout << "Welcome to the craps table" << endl;
    //cout << "Enter your lucky number: ";

    seed = time(0);
   // cin >> seed;
    srand(seed);
    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;

    roll = die1 + die2;
    cout << "Your roll is: " << die1 << " and " << die2 << " ->  " << roll << endl;
    if (roll == 7 || roll == 11) {
        cout << "You win!" <<endl;
    }
    else if (roll == 2 || roll == 3 || roll == 12) {
        cout << "You lose..." << endl;
    }
    else{
        do
        { 
            cout << "Rerolling --- " << endl;
            seed = time(0);
             srand(seed);
    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;

    roll = die1 + die2;
    cout << "Your roll is: " << die1 << " and " << die2 << " ->  " << roll << endl;
        } while (roll == 1 || roll == 4 || roll == 5 || roll == 6 || roll == 8 || roll == 9 || roll == 10 );
     if (roll == 7 || roll == 11) {
        cout << "You win!" <<endl;
     }
     else   {
        cout << "You lose..." << endl;
        
     }



    }

    return 0;
   
}