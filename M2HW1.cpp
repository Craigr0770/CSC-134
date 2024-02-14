#include <iostream>
using namespace std;

int main() {
    double blance;
    double Nblance;
    string Uname;
    double accountN;
    string answesr;
    double money;
    string W;
    string D;


    cout << "Welcome to RC banks  ";
    cout << "What's the name of the account holder?  ";
    cin >> Uname;
    cout << "What's your account number?   ";
    cin >> accountN;
    cout << "What's your starting balance? ";
    cin >> blance;

    cout << "Your account name is " << Uname << " and your acount number is " << accountN << endl;
    cout << "Your blance is " << blance << endl;

    cout << "Do you want to widraw or Deposit ";
    cout << "Please type W or D : ";
    cin >> answesr;

    if (answesr == "W"){
        cout << "How much you want to withdraw : ";
        cin >> money;
        Nblance = blance - money;
    

    }
    else if (answesr == "D" )
    {
        cout << "How much you want to Deposit : ";
        cin >> money;
        Nblance = blance + money;
    }
    

    cout << "You currently have " << Nblance << " in your account" << endl;







    return 0;
   
}
