// Function overloading is a feature in C++ that allows you to define multiple functions with the same name but different parameter lists. The compiler differentiates these functions based on the number and types of their parameters. This allows you to perform different tasks with the same function name, depending on the arguments passed to the function.

#include <iostream>
using namespace std;

void f1(int a);
void f1(int a, int b);

int main() {
    f1(10);
    f1(10, 20);
    return 0;
}

void f1(int a) {
    cout << "In f1(int a)\n";
}

void f1(int a, int b) {
    cout << "In f1(int a, int b)\n";
}