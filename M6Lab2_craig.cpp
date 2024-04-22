#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int num;
    Node* next;
};

int main() {
    cout << "M6LAB2" << endl;

    vector <int> numbers;

    int num;
    int how_many;
    cout << "Enter how many numbers? ";
    cin >> how_many;
    for (int i = 0; i < how_many; i++)
    {
        cout << "Enter a number: ";
        cin >> num;
        numbers.push_back(num);
    }

    cout << "Vector contents: ";
    for (int i: numbers) {
        cout << i << ",";
    }





        Node* head = nullptr;

        Node first;
        first.num = 1;
        first.next = nullptr;

        Node second;
        second.num =2;
        second.next = nullptr;

        head=&first;

        first.next = &second;

        cout << "Nodes of list: " << endl;
        Node* probe = head;
        while (probe != nullptr) {
            cout << probe->num << ",";
            probe = probe->next;
        }

    
    cout << endl;
    
    
   




    return 0;
   
}