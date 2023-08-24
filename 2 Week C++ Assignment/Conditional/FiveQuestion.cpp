#include<iostream>
using namespace std;
int main(){
    double side1, side2, side3;

    // Input the lengths of the sides
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Check if it's a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Check if it's an equilateral triangle
        if (side1 == side2 && side2 == side3) {
            cout << "It's an equilateral triangle." << endl;
        }
        // Check if it's an isosceles triangle
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "It's an isosceles triangle." << endl;
        }
        // If it's not equilateral or isosceles, it's scalene
        else {
            cout << "It's a scalene triangle." << endl;
        }
    }
    // If it's not a valid triangle
    else {
        cout << "It's not a valid triangle." << endl;
    }
}