# Automatic In-lining

In C++, functions can be defined to be inline, which suggests to the compiler to insert the complete body of the function wherever the function is called, instead of performing a regular function call. This can potentially increase the performance of the program by eliminating the overhead of function calls.

## Syntax

To define an inline function, use the `inline` keyword before the function definition:

```cpp
inline int add(int a, int b) {
    return a + b;
}
```

## Example

Here is an example of an inline function in a class:

```cpp
class Math {
public:
    inline int multiply(int a, int b) {
        return a * b;
    }
};
```

In this example, the `multiply` function is defined as inline. The compiler will attempt to replace calls to `multiply` with the actual code of the function.

## When to Use Inline Functions

- **Small Functions**: Inline functions are best suited for small, frequently called functions.
- **Performance Critical Code**: Use inline functions in performance-critical sections of code where the overhead of a function call is significant.

## Considerations

- **Code Size**: Excessive use of inline functions can lead to code bloat, as the function code is duplicated at each call site.
- **Compiler Discretion**: The `inline` keyword is a suggestion to the compiler, not a command. The compiler may choose to ignore the inline request.

## Conclusion

Inline functions can be a powerful tool for optimizing performance in C++ programs. However, they should be used judiciously to avoid potential downsides such as increased code size.
