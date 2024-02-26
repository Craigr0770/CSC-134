#include <iostream>
using namespace std;

int main() {

    int grade;

    cout << "Welcome to grade letter genrator" << endl;
    cout << "Enter your numeric grade : ";
    cin >> grade;

    if (grade >= 90 && grade <= 100){
        cout << "Your letter grade is A";
    }
    else if (grade >= 80 && grade <= 89){
        cout << "Your letter grade is B";
    }
    else if (grade >= 70 && grade <= 79){
        cout << "Your letter grade is C";
    }
    else if (grade >= 60 && grade <= 69){
        cout << "Your letter grade is D";
    }
    else if (grade >= 0 && grade <= 59){
        cout << "Your letter grade is F";
    }
    else {

        while (grade < 0 || grade > 100) { 
            cout << "eror please renter your numeric grade : ";
            cin >> grade; 
        } 
        
        if (grade >= 90 && grade <= 100){
            cout << "Your letter grade is A";
        }
        else if (grade >= 80 && grade <= 89){
            cout << "Your letter grade is B";
        }
        else if (grade >= 70 && grade <= 79){
            cout << "Your letter grade is C";
        }
        else if (grade >= 60 && grade <= 69){
            cout << "Your letter grade is D";
        }
        else if (grade >= 0 && grade <= 59){
            cout << "Your letter grade is F";
        }
    
    }
    
    return 0;
   
}