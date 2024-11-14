#include <iostream>

using namespace std;

int main(){
    int array[5] = {10, 9, 12, 22, 21};
    int *start = array;
    int *end = array + 5;
    int temp;
    for (int i = 0; i < 5/2; i++) 
    {
        temp = *(array + i);
        *(array + i) = *(array + 4 - i);
        *(array + 4 - i) = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}