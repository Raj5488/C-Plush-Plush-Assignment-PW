#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;

// Ans:-> 
// The program is correct and will compile but might result in runtime error. This is because prt will have a garbage address whcih might even point to a location which does not belong to our program and hence might result in Segmentation Fault when we arre trying to access it.
}