#include<iostream>

using namespace std;

int main(){
    int number;
    int sum;

    cout << "Enter natural number: ";
    cin >> number;

    
    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }

    cout << "The sum of first " << number << " natural number is: " << sum << endl;
    
    
    return 0;
}