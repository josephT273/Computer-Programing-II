#include<iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter number: ";
    cin >> number;
    
    int x = 1;
    while(x <= number){
        cout << x << ", ";
        ++x;
    }
    
    return 0;
}