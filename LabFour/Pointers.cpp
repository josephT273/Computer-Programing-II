#include<iostream>

using namespace std;

int main(){
    string food = "Pizza";
    string *ptr = &food;
    string **ptr2 = &ptr;
    string ***ptr3 = &ptr2;

    cout << &food << "\n";
    cout << food << "\n";
    cout << *ptr << "\n";
    cout << **ptr2 << "\n";
    cout << ***ptr3 << "\n";

    ***ptr3 = "Tacos";

    cout << food << "\n";
    cout << *ptr << "\n";
    cout << **ptr2 << "\n";
    cout << ***ptr3 << "\n";
    return 0;
}