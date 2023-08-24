#include <iostream>
using namespace std;

int main() {
    double x, y;

    // Input the coordinates (x, y)
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    // Check if the point is at the origin (0,0)
    if (x == 0 && y == 0) {
        cout << "The point is at the origin (0,0)." << endl;
    }
    // Check if the point lies on the x-axis
    else if (x == 0) {
        cout << "The point lies on the x-axis." << endl;
    }
    // Check if the point lies on the y-axis
    else if (y == 0) {
        cout << "The point lies on the y-axis." << endl;
    }
    // If the point is not on any axis or at the origin
    else {
        cout << "The point does not lie on any axis or at the origin." << endl;
    }

    return 0;
}
