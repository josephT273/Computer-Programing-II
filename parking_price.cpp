#include <iostream>
using namespace std;

#define CAR 2.0
#define BUS 3.0
#define TRUCK 5.0

int main(){

    char vehicle;
    int spentHour;
    double payment;
    int error;

    char name[7] = "Joseph";
    char names[7] = {'J', 'o', '\0'};;
    
    cout << "Enter the type of vehicle: ";
    cin.get(vehicle);
    cout << "Enter spent hour: ";
    cin >> spentHour;

    switch (vehicle) {
        case 'c':
        case 'C':
            payment = CAR * spentHour;
            break;
        case 't':
        case 'T':
            payment = TRUCK * spentHour;
                break;
        case 'b':
        case 'B':
            payment = BUS * spentHour;
                break;
        default:
            error = 1;
    }

    if (!error) {
        cout << "Payment: " << payment;
    }else{
        cout << "Invalid character";
    }
    return 0;
}