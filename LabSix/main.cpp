#include <iostream>

using namespace std;

class Student
{
    int id;
    string name;

public:
    void setter(int, string);
    void sayHello();
};

void Student::setter(int student_id, string student_name)
{
    id = student_id;
    name = student_name;
}

void Student::sayHello()
{
    cout << "Hello, " << name << " welcome. " << id << " is your id";
}

int main()
{
    Student student;
    student.setter(12, "Jane Doe");
    student.sayHello();
    return 0;
}