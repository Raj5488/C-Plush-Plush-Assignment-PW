// Write a function to cout the number of digits in a number and then print the square of this number 
#include<iostream>
using namespace std;
int square(int n){
    return n * n;
}
int coutNumberOfDigit(int num){
    int ans = 0;
    while(num > 0){
        ans++;
        num /=10;
    }
    return ans;
}
int main(){
    int num;
    cin >> num;
    int numberOfdigits = coutNumberOfDigit(num);
    cout << square(numberOfdigits) <<endl;
    return 0;
}