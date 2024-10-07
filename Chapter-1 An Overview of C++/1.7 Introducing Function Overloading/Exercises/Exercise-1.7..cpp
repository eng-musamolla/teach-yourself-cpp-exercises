/* Exercises 1.7.1:  Create a function called sroot() that returns the square root of its argument. Overload sroot() three ways: have it return the square root of an integer, a long integer, and a double. (To actually compute the square root, you can use the standard library function sqrt().)

 double atof ( const char *s);
 int atoi ( const char *s);
 long atol ( const char *s);


These functions return the numeric value contained in the string pointed to by s. Specifically, atof() returns a double, atoi() returns an integer, and atol() returns a long.
Why is it not possible to overload these functions?






It is not possible to overload the functions atof(), atoi(), and atol() because they are part of the C standard library and their signatures are already defined. Overloading these functions would require changing their signatures, which is not allowed for standard library functions. Additionally, overloading functions in C is not supported as it is in C++.

In C++, function overloading allows you to define multiple functions with the same name but different parameter lists. However, this does not apply to functions that are part of the standard library, as their behavior and signatures are fixed by the standard.

Here is a summary of why you cannot overload these functions:

Standard Library Functions: atof(), atoi(), and atol() are defined by the C standard library, and their signatures cannot be changed.
C Language Limitation: C does not support function overloading, unlike C++.
Fixed Signatures: The signatures of these functions are fixed and cannot be altered to create overloaded versions.
If you need similar functionality with different types, you can create your own functions with different names or use C++ features to achieve the desired behavior.

*/ 
