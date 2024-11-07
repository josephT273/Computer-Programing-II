#include <iostream>
using namespace std;

int main(){
    int matrix[5][6];
    int sum = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 6; j++){
            cout << "Enter the value for row " << i << " and column " << j << ": ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 6; j++){
           sum += matrix[i][j];
        }
        cout << "Sum of row " << i << " is " << sum << endl;
        sum = 0;
    }
    return 0;
}