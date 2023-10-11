// Write a program to find out the product of two numbers uisng pointers
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin>>x >>y;
    int *prtX, *ptrY;
    prtX = &x;
    ptrY = &y;

    int ans;
    int *ptrAns = &ans;
    *ptrAns = (*prtX) * (*ptrY);

    cout<< *ptrAns << endl;

    return 0;
}