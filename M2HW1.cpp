#include <iostream>
using namespace std;
void Question1();
void Question2();
int main() {
    Question1();
    Question2();

    return 0;
}


void Question1(){
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







    
   
}

void Question2(){ 
cout << "----------" << endl;
double numpizza;
double pizzaslices;
double numpeople;
double pizzaeat;
double pizzaleft;
string pizzatype;



cout << "Welcome to RC pizzaria" << endl;

cout << "Small pizza 4 slices Medium 6 slices Large 8 slices " << endl;
cout << "What type of pizza do you want ? " <<endl;
cout << " Enter small , medium , or large : ";
cin >> pizzatype;

if (pizzatype == "small"){
    cout << "How many pizzas are you getting?" << endl;
cin >> numpizza;
pizzaslices = numpizza * 4;
}
else if (pizzatype == "medium"){
    cout << "How many pizzas are you getting?" << endl;
cin >> numpizza;
pizzaslices = numpizza * 6;
}
else  if ( pizzatype == "large"){
    cout << "How many pizzas are you getting?" << endl;
cin >> numpizza;
pizzaslices = numpizza * 8;
}



cout << "How many peaople are eating pizza? ";
cin >> numpeople;
pizzaeat = numpeople * 3;
pizzaleft = pizzaslices - pizzaeat;
cout << "You will have " << pizzaleft << " pizza slices left.";


}
