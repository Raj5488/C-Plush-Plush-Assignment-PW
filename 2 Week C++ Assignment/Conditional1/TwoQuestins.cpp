// Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.

#include<iostream>
using namespace std;
int main(){
    int radious;
    cout<<"Enter the radious : ";
    float Pi = 3.142;
    float AreaOfCircle = Pi*radious*radious;
    float AreofCircumference = 2 * Pi * radious;
    if(AreaOfCircle > AreofCircumference){
        cout<<"The area of the circle is larger than its circumference";
    }
    else if(AreofCircumference < AreaOfCircle){
        cout<<"The area of the circle is smaller than its circumference";
    }
    else{
        cout<<"The area of the circle is equal to its circumference";
    }
}