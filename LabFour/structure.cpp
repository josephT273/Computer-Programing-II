#include <iostream>

using namespace std;

// Structures are a way to group data together
// They are useful for passing data between functions
// They are also useful for creating custom data types
// They are also useful for creating objects
// Declare a structure like this:
struct {
    int myNum;
    string myString;
} myStructure, myOtherStructure, myThirdStructure;

struct Car{
    string brand;
    string model;
    int year;
};


int main(){

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    Car myCar;
    myCar.brand = "Ford";
    myCar.model = "Mustang";
    myCar.year = 1967;

    cout << myCar.brand << " " << myCar.model << " " << myCar.year << "\n";
    return 0;
}