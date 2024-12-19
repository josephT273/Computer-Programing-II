#include <iostream>

using namespace std;

int fact(int k)
{
  if (k > 1)
  {
    return fact(k - 1) * k;
  }
  return 1;
}

int main()
{
  int result = fact(5);
  cout << result;
  return 0;
}
