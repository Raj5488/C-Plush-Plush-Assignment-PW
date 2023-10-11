// Write a funciton to take the radious of a circle as an argument and return its area.
#include<iostream>
using namespace std;

double area(int radius){
    return 3.14 * radius * radius;
}

int main(){
    int radious;
    cin>>radious;
    cout<<"Area of the circle is: "<<area(radious)<<" units square";
    return 0;
}   