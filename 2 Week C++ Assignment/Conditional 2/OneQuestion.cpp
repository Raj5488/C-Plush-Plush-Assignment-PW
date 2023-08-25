//Write a program to count the minimum number of notes in a given amount using the switch statement. input 510  output notes of "500" = 1 and notes of "10" = 1;
#include<iostream>
using namespace std;
int main(){
    int amount;
    int a, b, c, d, e, f, g, h;
    a = b = c = d = e = f = g = h = 0;
    cout<<"Please Enter you amout to find notes : ";
    cin>>amount;
    switch(amount>=500){
        case 1:
        h = amount/500;
        amount -= h * 500;
        break;
    }
    switch(amount >=100){
        case 1:
        g = amount/100;
        amount -= h * 100;
        break;
    }
    switch(amount >=50)
    {
        case 1:
            f = amount/50;
            amount -= f * 50;
    }
    switch(amount >=20)
    {
        case 1:
            e = amount/20;
            amount -= e * 20;
        break;
    }
    switch(amount >=10)
    {
        case 1:
            d = amount/10;
            amount -= d * 10;
        break;
    }
	switch(amount >=5)
    {
        case 1:
            c= amount/5;
            amount -= c* 5;
        break;
    }
    switch(amount >=2)
    {
        case 1:
            b= amount/2;
            amount -= b* 2;
        break;
    }
    switch(amount >=1)
    {
        case 1:
            a = amount/1;
            amount -= a * 1;
        break;
    }
    cout << "Rs.500 = " << h <<endl;
    cout << "Rs.100 = " << g <<endl;
    cout << "Rs.50 = " << f <<endl;
    cout << "Rs.20 = " << e <<endl;
    cout << "Rs.10 = " << d <<endl;
    cout << "Rs.5 = " << c <<endl;
    cout << "Rs.2 = " << b <<endl;
    cout << "Rs.1 = " << a <<endl;
}