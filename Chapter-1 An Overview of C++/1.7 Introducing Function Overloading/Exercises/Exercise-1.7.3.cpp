/*
Example-1.7.3: Create a function called min() that returns the smaller of the two numeric arguments
used to call the function. Overload min() so it accepts characters, integers, and doubles
as arguments.
*/




#include <iostream>
using namespace std;

int min(int a, int b) {
    return (a < b) ? a : b;
}

double min(double a, double b) {
    return (a < b) ? a : b;
}

char min(char a, char b) {
    return (a < b) ? a : b;
}

int main() {
    cout << "Min of 3 and 5: " << min(3, 5) << endl;

    cout << "Min of 3.5 and 2.1: " << min(3.5, 2.1) << endl;

    cout << "Min of 'a' and 'z': " << min('a', 'z') << endl;
    return 0;
}