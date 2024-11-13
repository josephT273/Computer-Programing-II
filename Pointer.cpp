#include<iostream>

using namespace std;

int main(){
    int numbers[5] = {1, 2, 3, 4, 5};
    int *start = numbers;
    int *end = numbers + 5;

    cout << "Initial Values : "<< endl;
    int temp;
    for (int i = 0; i < 5/2; i++) 
    {
        temp = *(numbers + i);
        *(numbers + i) = *(numbers + 4 - i);
        *(numbers + 4 - i) = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    
    return 0;
}