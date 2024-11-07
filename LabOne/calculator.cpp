#include<iostream>

using namespace std;

int main(){
    int numberOne, numberTwo;
    char op;
    double result;

    cout << "Enter first number: ";
    cin >> numberOne;

    
    cout << "Enter second number: ";
    cin >> numberTwo;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        result = numberOne + numberTwo;    
        cout << "Result " << result << endl;
        break;
    case '-':
        result = numberOne - numberTwo;
        cout << "Result " << result << endl;
        break;
    case '/':
        result = numberOne / numberTwo;
        cout << "Result " << result << endl;
        break;
    case '*':
        result = numberOne * numberTwo;    
        cout << "Result " << result << endl;
        break;
    default:
        cout << "Invalid operator\n";
        break;
    }    
    return 0;
}