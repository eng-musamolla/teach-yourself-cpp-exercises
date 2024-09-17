//
// Created by opi on 9/8/24.
//
#include<iostream>
#include<string>
using namespace std;

int main() {
    int a;
    double b;
    string c;

    cout<<"Enter a interger value: ";
    cin>>a;
    cout<<"Enter a double value: ";
    cin>>b;
    cout<<"Enter an string: ";
    cin.ignore();
    getline(cin,c);

    cout << "Integer is: " << a <<endl;
    cout << "Double is: " << b <<endl;
    cout << "String is: " << c <<endl;

}
