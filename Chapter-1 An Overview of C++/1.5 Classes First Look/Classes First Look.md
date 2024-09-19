# Classes First Look in C++

## Introduction
In this section, we will take a first look at classes in C++. Classes are the fundamental building blocks of object-oriented programming in C++.

## What is a Class?
A class is a user-defined data type that serves as a blueprint for creating objects. It encapsulates data and functions that operate on the data.

## Basic Syntax
Here is the basic syntax for defining a class in C++:

```cpp
class ClassName {
public:
    // Public members
    int publicData;

    void publicFunction() {
        // Function implementation
    }

private:
    // Private members
    int privateData;

    void privateFunction() {
        // Function implementation
    }
};
```

## Example
Let's look at a simple example of a class in C++:

```cpp
#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.width = 5;
    rect.height = 10;
    cout << "Area: " << rect.area() << endl;
    return 0;
}
```

## Explanation
- **Class Definition**: The `Rectangle` class has two public data members (`width` and `height`) and one public member function (`area`).
- **Object Creation**: An object `rect` of class `Rectangle` is created.
- **Accessing Members**: The data members are accessed using the dot operator, and the member function `area` is called to calculate the area of the rectangle.

## Conclusion
This was a brief introduction to classes in C++. As we progress, we will delve deeper into more advanced concepts such as constructors, destructors, inheritance, and polymorphism.
