#include<iostream>

using namespace std;

int main() {
    float temprature;
    float humidity;
    int hour;

    cout <<  "Enter the temprature: ";
    cin >> temprature;

    cout << "Enter the humditiy: ";
    cin >> humidity;

    cout << "Enter the hour: ";
    cin >> hour;

    // Check The Temtemprature
    if (temprature < 18){
        cout << "Heater ON\n";
    }else{
        cout << "Heater OFF\n";
    }
    
    if (temprature > 25){
        cout << "AC On\n";
    }else{
        cout << "AC OFF\n";
    }

    if (humidity > 70 && (temprature >= 20 && temprature <= 30))
    {
        cout << "Dehumidifier ON\n";
    }else{
        cout << "Dehumidifier OFF\n";
    }
     
    
    if (hour < 6 && hour > 21)
    {
        cout << "Light ON\n";
    }else{
        cout << "Light OFF\n";
    }   
    return 0;
}