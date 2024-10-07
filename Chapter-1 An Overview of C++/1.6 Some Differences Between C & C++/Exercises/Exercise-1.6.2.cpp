// Exercise 1.6.2: On your own, try declaring local variables at various points in a C++ program. Try the same in a C program, paying attention to which declarations generate errors.


// C++ Program
#include <iostream>
using namespace std;

void f() {
    int x = 10; // Local variable declaration inside a function
    cout << "Value of x: " << x << endl;
}

int main() {
    int y = 20; // Local variable declaration inside main
    cout << "Value of y: " << y << endl;

    if (true) {
        int z = 30; // Local variable declaration inside a block
        cout << "Value of z: " << z << endl;
    }

    // Uncommenting the following line will cause an error because z is not in scope here
    // cout << "Value of z: " << z << endl;

    f();
    return 0;
}



// C Program
/*
#include <stdio.h>

void f() {
    int x = 10; // Local variable declaration inside a function
    printf("Value of x: %d\n", x);
}

int main() {
    int y = 20; // Local variable declaration inside main
    printf("Value of y: %d\n", y);

    if (1) {
        int z = 30; // Local variable declaration inside a block
        printf("Value of z: %d\n", z);
    }

    // Uncommenting the following line will cause an error because z is not in scope here
    // printf("Value of z: %d\n", z);

    f();
    return 0;
}

*/