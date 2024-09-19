
#include<iostream>
#include<string>
using namespace std;

int main() {
    int an;
    double b;
    string c;

    cout<<"Enter an integer value: ";
    cin>>an;
    cout<<"Enter a double value: ";
    cin>>b;
    cout<<"Enter a string: ";
    cin.ignore();
    getline(cin,c);

    cout << "Integer is: " << an <<endl;
    cout << "Double is: " << b <<endl;
    cout << "String is: " << c <<endl;

}
