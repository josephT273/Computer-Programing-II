#include <iostream>

using namespace std;

double add(double, double);
double multiply(double, double);
double subtract(double, double);
double division(double, double);

int add(int, int);
int multiply(int, int);
int subtract(int, int);
int division(int, int);

void sayHello(string name = "World")
{
  cout << "Hello, " << name << endl;
}

void listOfNames(string arr[4])
{
  for (int i = 0; i < 4; i++)
  {
    cout << arr[i] << endl;
  }
}

int main()
{
  int x = add(12, 21);

  cout << x << endl;

  string name[4] = {"Abebe", "Ayele", "Bekele", "Jemal"};
  listOfNames(name);

  sayHello("Joseph");
  sayHello();
  return 0;
}

double add(double a, double b)
{
  return a + b;
}

double multiply(double a, double b)
{
  return a * b;
}

double subtract(double a, double b)
{
  return a + b;
}

double division(double a, double b)
{
  return a / b;
}

int add(int a, int b)
{
  return a + b;
}

int multiply(int a, int b)
{
  return a * b;
}

int subtract(int a, int b)
{
  return a + b;
}

int division(int a, int b)
{
  return a / b;
}
