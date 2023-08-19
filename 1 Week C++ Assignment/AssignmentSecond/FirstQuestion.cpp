#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter first Number\n";
    cin>>x; // user inpute x symtex;
    int y, m;
    cout << "Enter second number and value for taking modules \n";
    cin >> y>> m;  //    user will give value y ; 
    int Z = (x * y) % m;
    cout << "Final Answer is: "<< Z;

}