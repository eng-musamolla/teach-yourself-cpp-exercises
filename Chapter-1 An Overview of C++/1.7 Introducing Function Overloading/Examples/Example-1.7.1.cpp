#include <iostream>
using namespace std;

// Overload myAbs() three ways
// The problem is that the abs function is already defined in the cmath library, which causes ambiguity. To fix this, you should use a different name for your custom abs functions.

int myAbs(int n);
long myAbs(long n);
double myAbs(double n);

int main() {
    cout << "Absolute value of -10: " << myAbs(-10) << "\n\n";
    cout << "Absolute value of -10L: " << myAbs(-10L) << "\n\n";
    cout << "Absolute value of -10.01: " << myAbs(-10.01) << "\n\n";
    return 0;
}

// myAbs() for ints
int myAbs(int n) {
    cout << "In integer myAbs()\n";
    return n < 0 ? -n : n;
}

// myAbs() for longs
long myAbs(long n) {
    cout << "In long myAbs()\n";
    return n < 0 ? -n : n;
}

// myAbs() for doubles
double myAbs(double n) {
    cout << "In double myAbs()\n";
    return n < 0 ? -n : n;
}
