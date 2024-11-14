#include <iostream>

using namespace std;

int main(){
    int arrayOne[2][2] = {5, 7, 9, 8};
    int arrayTwo[2][2] = {7, 4, 5, 2};
    int sum[2][2], sub[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = arrayOne[i][j] + arrayTwo[i][j];
            sub[i][j] = arrayOne[i][j] - arrayTwo[i][j];

            cout << "Sum of " << arrayOne[i][j] << " and " << arrayTwo[i][j] << ": " << sum[i][j] << endl;
            cout << "Subtraction of " << arrayOne[i][j] << " and " << arrayTwo[i][j] << ": " << sub[i][j] << endl;
        }
    }
    return 0;
}