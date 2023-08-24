//Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

#include <iostream>
using namespace std;

int main() {
    char character;

    // Input a character
    cout << "Enter a character: ";
    cin >> character;

    // Check if the character is an alphabet
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        cout << "The character is an alphabet." << endl;
    }
    // Check if the character is a digit
    else if (character >= '0' && character <= '9') {
        cout << "The character is a digit." << endl;
    }
    // If it's not an alphabet or digit, consider it a special character
    else {
        cout << "The character is a special character." << endl;
    }

    return 0;
}
