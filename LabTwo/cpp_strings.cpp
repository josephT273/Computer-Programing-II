/**
 * @brief Demonstrates various string operations and array manipulations in C++
 *
 * This function showcases string concatenation, length/size operations,
 * character access and modification, array initialization, iteration,
 * and size calculation.
 *
 * @return int Returns 0 upon successful execution of the program
 */
#include<iostream>
#include<string>

using namespace std;
int main(){
    string firstName = "John";
    string lastName = "Doe";

    string fullnamePlusConcat = firstName + " " + lastName; // @brief: String concatenation example here
    cout << fullnamePlusConcat << endl;

    string fullname = firstName.append(" ").append(lastName);

    cout << "The length of the string fullname is in length: " << fullname.length() << endl;
    cout << "The length of the string fullname is in size: " << fullname.size() << endl;

    cout << "fullname at order 0: " << fullname.at(0) << endl;

    cout << "fullname first character: " << fullname[0] << endl;
    fullname[0] = 'H';
    cout << "Updated fullname: " << fullname << endl;

    cout << "I'm \"Happy\"" << endl;

    cout << fullname << endl;

    // Array of strings
    string Cars[3] = {"Volvo", "BMW", "Toyota"};

    cout << Cars[0] << endl;
    Cars[0] = "Tesla";
    cout << Cars[0] << endl;

    // for loop over array
    for (int i = 0; i < 3; i++)
    {
        cout << "Cars name on the order " << i  << " is "<< Cars[i] << endl;
    }

    for (string car : Cars){
        cout << "Cars name is: " << car << endl;
    }

    // get the size of array
    cout << "Cars size is: " << sizeof(Cars) / sizeof(Cars[0]) << endl;

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Column " << i << " Row " << j << " " << letters[i][j] << endl;
        }
        
    }
    
    return 0;
}

