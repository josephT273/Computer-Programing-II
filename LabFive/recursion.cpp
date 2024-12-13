#include <iostream>

using namespace std;

int sum(int k){
  if (k % 2 == 0){
    k /= 2;
  }else{
    k = (k * 3) + 1;
  }
  return k;
}

int main(){
  int result = sum(5);
  cout << result;
  return 0;
}
