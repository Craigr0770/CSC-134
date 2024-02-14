#include <iostream>
using namespace std;


int main() {
  
  

  string choice; 
  void chooseDoor1();
 void chooseDoor2(); 
 void chooseDoor3();
  




  cout << "Welcome to the house game !!!";
  cout << "There are 3 houses  Red house , Blue house , and  a Pink house";

  // ask the question
  cout << "Which housew do you chose?" << endl;
  cout << "Type red  , blue , or pink : "; 
  cin >> choice;

  if ("red" == choice) {
    chooseDoor1();
  }
  
  else if ("blue" == choice) {
    chooseDoor2();
  }
  else if ("pink" == choice) {
    chooseDoor3();
  }

  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  
cout << "thanks for playing";
  return 0; // tells the computer that we finished without errors
} // end of the main() method

void chooseDoor1() {
  // this function is called in main if the user chooses 1.
  cout << "You chose the Red house" << endl;
  cout << "You win $1,000 " << endl;
    }

  void chooseDoor2() {
  // this function is called in main if the user chooses 1.
  cout << "You chose the Blue house" << endl;
  cout << "You win $10." << endl;
    }
  void chooseDoor3() {
  // this function is called in main if the user chooses 1.
  cout << "You chose the Pink house" << endl;
  cout << "You win a half eaten crayon." << endl;
    }


