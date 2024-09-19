# In-line Functions

In C++, inline functions are used to improve the performance of the application. When the function is declared as inline, the compiler replaces the function call with the function code itself, which can reduce the overhead of function calls.

## Syntax

```cpp
inline return_type function_name(parameters) {
    // function body
}
```

## Example

```cpp
#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    cout << "The sum is: " << result << endl;
    return 0;
}
```

In this example, the `add` function is declared as inline. When `add(5, 3)` is called, the compiler replaces this call with the actual code of the `add` function.

## Advantages

- **Performance**: Reduces the overhead of function calls.
- **Optimization**: The compiler can optimize the code better.

## Disadvantages

- **Code Size**: Can increase the size of the binary if the inline function is large or called many times.
- **Compiler Limitations**: The compiler may ignore the inline request if the function is too complex.

## When to Use

- Use inline functions for small, frequently called functions.
- Avoid using inline for large functions or functions with complex logic.
