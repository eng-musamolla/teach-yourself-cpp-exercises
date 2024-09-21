// Exercise 1.6.1: The following program will not compile as a C++ program. Why not?

// This program has an error .
#include <iostream>
using namespace std;

// Function declaration
void f();

int main()
{
    f();
    return 0;
}

// Function definition
void f()
{
    cout << "this work now" << endl;
}