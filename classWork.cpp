/**
 * @brief Main function that performs various operations including vowel identification,
 *        alphabet checking, finding maximum of three numbers, and calculating average scores.
 *
 * This function demonstrates:
 * 1. Vowel identification
 * 2. Checking if a character is an alphabet
 * 3. Finding the maximum of three numbers
 * 4. Calculating the average score of students
 *
 * @return int Returns 0 upon successful execution of the program.
 */
#include <iostream>
#include <ostream>

using namespace std;

int main()
{

    char alphabet;

    cout << "Enter alphabet: ";
    cin.get(alphabet);

    bool capVowel = (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U');
    bool smallVowel = (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u');

    if (capVowel || smallVowel)
    {
        cout << "It is vowel" << endl;
    }
    else
    {
        cout << "It is consonant" << endl;
    }

    char character;
    cout << "Enter a key: ";
    cin >> character;

    if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122))
    {
        cout << "The key you entered it alphabet" << endl;
    }
    else
    {
        cout << "The key you entered is not alphabet" << endl;
    }

    int a, b, c;
    int max;
    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    max = (a > b && a > c) ? a : (b > a && b > c) ? b
                                                  : c;
    cout << "The maximum number is " << max << endl;

    int numberOfStudent;
    double totalScore;
    int score;
    double average;

    cout << "Enter the number of students: ";
    cin >> numberOfStudent;

    int i = 1;
    while (i <= numberOfStudent)
    {
        cout << "Enter the " << i << " Student score: ";
        cin >> score;
        totalScore += score;
        i++;
    }

    average = totalScore / numberOfStudent;
    cout << "The average of " << numberOfStudent << " in math score is " << average << endl;
    return 0;
}