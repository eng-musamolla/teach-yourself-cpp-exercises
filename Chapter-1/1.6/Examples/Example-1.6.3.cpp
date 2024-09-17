//
// Created by opi on 9/9/24.
//
#include<iostream>
using namespace std;
int main() {
    int a,b,fact=1;

    cout<<"Enter the value of a: ";
    cin>>a;

    for(b=a; b>=1; b--) {
        fact=fact*b;
    }
    cout<<"factorial is: " <<fact;
    return 0;
}