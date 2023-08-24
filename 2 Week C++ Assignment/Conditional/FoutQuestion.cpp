// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

#include<iostream>
using namespace std;
int main(){
    int Length;
    cout<<"Enter the Length : ";
    cin>>Length;
    int Breadth;
    cout<<"Enter the Breadth : ";
    cin>>Breadth;
    float AreaOfReactangle =  Length * Breadth;
    float PerimeterOfReactangle = 2 * (Length + Breadth);
    if(AreaOfReactangle > PerimeterOfReactangle){
        cout<<"The area of the rectangle is greater than its perimeter";
    }
    else{
        cout<<"The area of the rectangle is not greater than its perimeter";
    }
}