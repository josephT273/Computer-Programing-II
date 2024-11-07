#include<iostream>

using namespace std;

int main(){
    string hello{"HELLO"};
    int count;
    for (char c : hello){
        if (c == 'L')
        {
            count++;
        }
        
    }

    cout << "L apper in the World HELLO is " << count << " Times\n";
    
    return 0;
}