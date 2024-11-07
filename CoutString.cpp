/**
 * @brief Main function to check if a word is a palindrome and count its length
 *
 * This function prompts the user to enter a word, checks if it's a palindrome,
 * and outputs the result along with the word's length.
 *
 * @return 0 on successful execution
 */
#include <cstring>
#include <iostream>
#include <limits>

using namespace std;
int main(){

    char word[50];
    cout << "Enter word: ";
    cin.get(word, 49);

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // check the word is palindrome
    bool isPalindrome = true;
    int len = static_cast<int>(strlen(word));
    for (int i = 0; i < len / 2; i++) {
        if (word[i]!= word[len - (i + 1)]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome){
        cout << "The word is a palindrome." << endl;
    }else{
        cout << "The word is not a palindrome." << endl;
    }


    cout << "Number of words in the string are: " << len << endl;
    return 0;
}
