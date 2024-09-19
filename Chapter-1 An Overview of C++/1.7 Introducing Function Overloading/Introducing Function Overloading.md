# Introducing Function Overloading

Function overloading is a feature in C++ that allows you to have more than one function with the same name, as long as their parameter lists are different. This can make your code more readable and easier to maintain.

## Example

Here's a simple example of function overloading:

```cpp
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int intResult = add(2, 3);
    double doubleResult = add(2.5, 3.5);

    cout << "Sum of integers: " << intResult << endl;
    cout << "Sum of doubles: " << doubleResult << endl;

    return 0;
}
```

In this example, there are two `add` functions: one that takes two integers and another that takes two doubles. The compiler determines which function to call based on the arguments provided.

## Benefits

- **Readability**: Using the same function name for similar operations can make your code easier to understand.
- **Maintainability**: It is easier to manage and update code when related operations are grouped under the same function name.

## Rules

When overloading functions, you must follow these rules:

1. The functions must have different parameter lists (either in number, type, or both).
2. The return type alone is not sufficient to distinguish overloaded functions.

Function overloading is a powerful feature that, when used correctly, can greatly enhance the clarity and maintainability of your code.
