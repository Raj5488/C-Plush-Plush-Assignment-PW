#include <iostream>
using namespace std;

int main() {
    char char1, char2;

    // Input from the user
    cout << "Enter the first character: ";
    cin >> char1;
    cout << "Enter the second character: ";
    cin >> char2;

    // Calculate the difference between ASCII values
    int asciiDiff = int(char1) - int(char2);

    cout << "The difference between the ASCII values is: " << asciiDiff << endl;

    return 0;
}
