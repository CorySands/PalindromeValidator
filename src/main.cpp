#include <iostream>
using namespace std;


bool isPalindrome(string word) {
    
    // Checks if the word has at least 2 letters 
    //      (words with 0 or 1 letters are inherently palindromes)
    if (word.length() >= 2) {
        // Checks if the letters at the beginning and end of the string are the same
        if (word[0] == word.back()) {
            word.erase(0,1); // Remove first letter
            word.erase(word.length()-1,1); // Remove last letter
            return isPalindrome(word); // Check if the word with the removed letters is a palindrome
        }
        else return false; // Word is not a palindrome
    }
    else return true; // Word is a palindrome

}

int main(int argc, char *argv[])
{
    string input = ""; // User input

    // Continues to ask for input until user exits
    while (true) {
        cout << "---Validate Palindrome--- (x = exit)\n\nEnter word: "; // Header
        cin >> input; // Get user input

        if (input.length() == 1 && input[0] == 'x') exit(0); // Exit if user input is "x"

        // Check if user input is a palindrome
        if (isPalindrome(input))
            cout << "\"" << input << "\" is a palindrome" << endl;
        else
            cout << "\"" << input << "\" is not a palindrome" << endl;

        cout << "\n\n\n";
    } // End While

    return 1;
}
