// Exercises 1.7.1:  Create a function called sroot() that returns the square root of its argument. Overload sroot() three ways: have it return the square root of an integer, a long integer, and a double. (To actually compute the square root, you can use the standard library function sqrt().)


#include <iostream>
#include <cmath>
using namespace std;

int sroot(int a) {
    return sqrt(a);
}

long sroot(long a) {
    return sqrt(a);
}

double sroot(double a) {
    return sqrt(a);
}

int main() {
    int intVal = 16;
    long longVal = 25L;
    double doubleVal = 36.0;

    cout << "Square root of int " << intVal << " is " << sroot(intVal) << endl;
    cout << "Square root of long " << longVal << " is " << sroot(longVal) << endl;
    cout << "Square root of double " << doubleVal << " is " << sroot(doubleVal) << endl;

    return 0;
}

