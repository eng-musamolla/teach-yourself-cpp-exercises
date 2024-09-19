
#include<iostream>
#include<cmath>
using namespace std;

double SRoot(int n) {
    cout<< "Squre root of an Integer: ";
    return sqrt(n);
}
double SRoot(long n) {
    cout<< "Squre root of a long: ";
    return sqrt(n);
}
double SRoot(double n) {
    cout<< "Squre root of a double: ";
    return sqrt(n);
}

int main() {
    int a= 10;
    long b= 123456780;
    double c=10.5;

    cout<< SRoot(a) << endl;
    cout<< SRoot(b) << endl;
    cout<< SRoot(c) << endl;

    return 0;
}