#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number\n";
    cin>>x;     // user willgive 'x' a value;
    int y;
    cout<<"Enter second number\n";
    cin>>y;     // user will given 'y' a value.
    cout<<(x!=y)<<" "<<(x>=y);

    return 0;
}