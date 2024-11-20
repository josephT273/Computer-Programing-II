#include <iostream>
#include <string>

using namespace std;


// Create blue print for department
// struct have name and short namespace
struct Department {
    string name;
    string shortName;
};

// Create blue print for course
// struct have name and code
struct Course{
    string name;
    string code;
};

// Create blue print for student information
// struct has first name, last name, score, department(from department struct) and course (from course struct)
struct Student {
    string id;
    string firstname;
    string lastname;
    Department department;
    Course *courses; // enable dynamic array to stote student courses
    float *score; // enable dynamic array to store the score
};

int main() {
    Student *students;
    Department department;
    Course *courses;
    int numberOfCourses, numberOfStudents;

    // Fetch necessary information from the user
    cout << "How many students do you wish to register: ";
    cin >> numberOfStudents;
    cin.ignore();
    
    cout << "What is the name of your department: ";
    getline(cin, department.name);

    cout << "What is the short name for \"" << department.name << "\": ";
    getline(cin, department.shortName);

    cout << "How many courses are there in \"" << department.name << "\" department: ";
    cin >> numberOfCourses;
    cin.ignore();

    students = new Student[numberOfStudents];
    courses = new Course[numberOfCourses];

    // Entering course information
    for (int i = 0; i < numberOfCourses; i++) {
        cout << "Enter the name of the " << (i + 1) << " course: ";
        getline(cin, courses[i].name);

        cout << "Enter the code for \"" << courses[i].name << "\": ";
        getline(cin, courses[i].code);
    }

    // Fetch each students information
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Enter the id of the " << (i + 1) << " Student: ";
        getline(cin, students[i].id);

        cout << "Enter the first name of the " << (i + 1) << " Student: ";
        getline(cin, students[i].firstname);

        cout << "Enter the last name for \"" << students[i].firstname << "\": ";
        getline(cin, students[i].lastname);

        students[i].department = department;
        students[i].courses = courses;
        students[i].score = new float[numberOfCourses];

        // Fetching the score of current student
        for (int j = 0; j < numberOfCourses; j++) {
            cout << "Enter " << students[i].firstname << "\'s \"" << courses[j].name << "\" score: ";
            cin >> students[i].score[j];
        }
        cin.ignore();
    }

    cout << "\n\n";
    // Desplay the student information
    cout << "-- Department Information --" << endl;
    cout << "Department: " << department.name << "(" << department.shortName << ")\n\n";
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "-- Student Information --" << endl;
        cout << "Fullname: " << students[i].firstname << " " << students[i].lastname << endl;
        cout << "Student ID: " << students[i].id << endl;

        cout << "-- Course Information --\n";
        for (int j = 0; j < numberOfCourses; j++) {
            cout << "\t" << courses[j].name << "(" << courses[j].code <<"):" << students[i].score[j] << endl;
        }
    }
    return 0;
}
