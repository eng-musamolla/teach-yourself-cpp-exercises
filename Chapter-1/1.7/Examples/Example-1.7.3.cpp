//
// Created by opi on 9/10/24.
//
#include<iostream>
using namespace std;

void overload(int a) {
    cout<<"One parameter: " << a <<endl;
}
void overload(int a, int b) {
    cout<<"Two parameter: " << a << " and " << b;
}
int main() {
    overload(10);
    overload(10,20);
    return 0;
}