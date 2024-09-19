# Object Pointers

In C++, pointers can also be used to point to objects. This allows for dynamic allocation and manipulation of objects at runtime. Here is a brief overview of how to use object pointers in C++.

## Declaring Object Pointers

To declare a pointer to an object, you use the class name followed by an asterisk (`*`). For example:

```cpp
class MyClass {
public:
    void display() {
        std::cout << "Hello, World!" << std::endl;
    }
};

MyClass* objPtr;
```

## Allocating Memory for Object Pointers

You can allocate memory for an object pointer using the `new` keyword:

```cpp
objPtr = new MyClass;
```

## Accessing Members Using Object Pointers

To access members of the object through the pointer, you use the arrow operator (`->`):

```cpp
objPtr->display();
```

## Deleting Object Pointers

It is important to free the memory allocated for an object pointer using the `delete` keyword to avoid memory leaks:

```cpp
delete objPtr;
objPtr = nullptr; // Good practice to avoid dangling pointers
```

## Example

Here is a complete example demonstrating the use of object pointers:

```cpp
#include <iostream>

class MyClass {
public:
    void display() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    MyClass* objPtr = new MyClass;
    objPtr->display();
    delete objPtr;
    objPtr = nullptr;
    return 0;
}
```

In this example, we create a pointer to an object of `MyClass`, allocate memory for it, use it to call a member function, and then properly delete the allocated memory.
