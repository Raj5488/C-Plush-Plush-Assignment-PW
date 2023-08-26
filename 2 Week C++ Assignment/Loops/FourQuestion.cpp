// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){

            //First Methods
    int n;
    cout<<"Enter the vlaue : ";
    cin>>n;
    // for(int i=4;i<=2*n-1;i+=3){
    //     cout<<i<<endl;
    // }

        //Second Methods
    // int a = 4;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a = a + 3;
    // }

            // WE CAN MODIFIED 
    for(int a = 4;a<=n;a=a+3) cout<<a<<endl;


}