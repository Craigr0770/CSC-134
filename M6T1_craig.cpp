#include <iostream>
using namespace std;



void part1();
void part2();

int main() {
    cout << "M6T1" << endl;
    part1();
    part2();

    return 0;
}

void part1(){
    cout << "Part 1" << endl; 
    const int SIZE = 5; // 5 days
    int cars;
    int total = 0;
    double average;
    // find out how many cars spotted per day
    cout << "Enter number of cars seen." << endl;
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> cars;
        total = total + cars;
        average = (double) total / SIZE;
    }
    cout << "Total cars: " << total  << endl; 
    cout << "Average cars per day : " <<  average << endl;
    // find total and adverage
}

void part2(){
    cout << "Part 2" << endl; 
    const int SIZE =5;
    int total =0;
    // array to hold data
    int cars[SIZE] = {0};

    string days[] = {"Mon", "Tue", "Wed", "Th", "Fri"};

    cout << "Enter cars seen for each day." << endl;
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << ": ";
        cin >> cars[i];
    }

    for (int i=0; i < SIZE; i++) {
        total += cars[i];
    }
    double average = (double) total / SIZE;
    cout << "Total = " << total << ", average = " << average << endl;
    // plot the data
    for  (int i=0; i < SIZE; i++) {
        cout << days[i] << "\t";
        cout << cars[i] << "\t";
        for (int j=0; j < cars[i]; j++) {
            cout << "|";
        }
    }

}

