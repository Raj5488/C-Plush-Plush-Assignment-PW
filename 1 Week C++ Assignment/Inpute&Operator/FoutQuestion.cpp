#include<iostream>
using namespace std;
int main(){
    int hight;
    cout<<"Enter Hight of the cyliner : ";
    cin>>hight;
    int radious;
    cout<<"Enter value radious of cylinder : ";
    cin>>radious;
    float Pi = 3.145;
    float valueofCylinder = Pi*radious*radious*hight;
    cout<<"Value of Cylinder is "<<valueofCylinder;
}