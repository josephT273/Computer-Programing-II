#include <iostream>

using namespace std;

int main(){
    int array[5] = {10, 9, 12, 22, 21};
    int min = array[0];

    for (int i = 0; i < 5; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    cout << "The minimum from given array is: " << min << endl;
    return 0;
}