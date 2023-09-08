// Print first 'n' fibonacci numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    int f1 = 1, f2 =1;
    cout<< f1 << f2 << " "<< f1 << " ";
    for(int i=3;i<=n;i++){
        int next = f1 +f2;
        cout<<next<<" ";
        f1 = f2;
        f2 = next;
    }
}