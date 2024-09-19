
#include<iostream>
using namespace std;

int myabs(int n) {
    cout<<"Integer absolute: ";
    return (n<0) ? -n : n;
}
long myabs(long n) {
    cout<<"Long absolute: ";
    return (n<0) ? -n : n;
}
float myabs(float n) {
    cout<<"Float absolute: ";
    return (n<0) ? -n : n;
}

int main() {
    int a= -5;
    long b= -123456788765;
    float c= -10.7;

    cout << "absolute of a: " << myabs(a) <<endl;
    cout << "absolute of b: " << myabs(b) <<endl;
    cout << "absolute of c: " << myabs(c) <<endl;

    return 0;
}