#include<iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter number: ";
    cin >> number;
    
    int x = 1;
    do{
        cout << x << ", ";
        ++x;
    }while(x <= number);
    
    return 0;
}