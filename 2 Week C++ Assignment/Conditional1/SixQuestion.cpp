#include <iostream>
using namespace std;

int main() {
    int marksA, marksB, marksC;

    // Input marks for students A, B, and C
    cout << "Enter marks for student A: ";
    cin >> marksA;
    cout << "Enter marks for student B: ";
    cin >> marksB;
    cout << "Enter marks for student C: ";
    cin >> marksC;

    // Compare the marks to find the student with the least marks
    if (marksA < marksB && marksA < marksC) {
        cout << "Student A scored the least marks." << endl;
    } else if (marksB < marksA && marksB < marksC) {
        cout << "Student B scored the least marks." << endl;
    } else if (marksC < marksA && marksC < marksB) {
        cout << "Student C scored the least marks." << endl;
    } else {
        cout << "Two or more students have the same least marks." << endl;
    }

    return 0;
}
