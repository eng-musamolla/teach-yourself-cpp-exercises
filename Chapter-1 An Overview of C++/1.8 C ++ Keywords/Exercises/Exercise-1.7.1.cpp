
#include<iostream>
#include<cmath>
using namespace std;

double sroot(int n) {
    cout<< "Squre root of an Integer: ";
    return sqrt(n);
}
double sroot(long n) {
    cout<< "Squre root of a long: ";
    return sqrt(n);
}
double sroot(double n) {
    cout<< "Squre root of a double: ";
    return sqrt(n);
}

int main() {
    int a= 10;
    long b= 123456780;
    double c=10.5;

    cout<< sroot(a) << endl;
    cout<< sroot(b) << endl;
    cout<< sroot(c) << endl;

    return 0;
}