// Display this GP - 3,12,48,.. upto ‘n’ terms.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    // for(int i=3;i<=n;i*=4){
    //     cout<<i<<endl;
    // }

        //Second Methods
    int a = 3;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a * 4; 
    }
}