//
// Created by opi on 9/9/24.
//
#include<iostream>
using namespace std;

int sum(int a,int b) {
    return a+b;
}
int main() {
    int a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<endl << "Enter value of b: ";
    cin>> b;
    cout<<endl;

    c= sum(a,b);
    cout<<"Sum is: " << c;

    return 0;

}

