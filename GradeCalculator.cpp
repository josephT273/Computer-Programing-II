#include<iostream>

using namespace std;

#define AP 90
#define A 85
#define AM 80
#define BP 75
#define B 70
#define BM 65
#define CP 60
#define C 50
#define CM 45
#define D 40
#define MAX 100
#define MIN 0

int main(){
  double score;
  string grade;

  do {
    cout << "Enter your score: ";
    cin >> score;

    if (score < MIN || score > MAX){
      cerr << "Error: Score is out of range. Please enter a score between 0 and 100." << endl;
    }
  }while (score < MIN || score > MAX);
  
  // check the grade
  (score >= AP ) ?
    grade = "A+" : (score >= A) ?
    grade = "A" : (score >= AM) ?
    grade = "A-" : (score >= BP) ?
    grade = "B+" : (score >= B) ?
    grade = "B" : (score >= BM) ?
    grade = "B-" : (score >= CP) ?
    grade = "C+" : (score >= C) ?
    grade = "C" : (score >= CM) ?
    grade = "C-" : (score >= D) ?
    grade = "D" : grade = "F";

  cout << grade << endl;
  return 0;
}
