#include <iostream>

using namespace std;

int main(){
    int array[5] = {10, 9, 12, 22, 21};
    int max = array[0];

    for (int i = 0; i < 5; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }

    cout << "The Maximum from given array is: " << max << endl;
    return 0;
}