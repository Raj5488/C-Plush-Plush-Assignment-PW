#include <iostream>
using namespace std;
int main() {
    const double pi = 3.14159;
    double radius, height;
    // Input from the user
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    float volume = pi * radius * radius * height;
    // Calculate and display the volume
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
