#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x number : ";
    cin>>x;
    int y;
    cout<<"Enter y number : ";
    cin>>y;
    int m;
    cout<<"Enter m number : ";
    cin>>m;
    int z = (x*y)%m;
    cout<<"Output is : " <<z;

}