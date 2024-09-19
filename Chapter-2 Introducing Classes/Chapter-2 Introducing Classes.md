# Chapter 2: Introducing Classes

In this chapter, we will explore the basics of classes in C++. Classes are the fundamental building blocks of object-oriented programming (OOP) in C++. They allow you to create your own custom data types that can encapsulate both data and functions.

## Topics Covered

- What is a Class?
- Defining a Class
- Creating Objects
- Access Specifiers
- Member Functions
- Constructors and Destructors

## What is a Class?

A class is a blueprint for creating objects. It defines a type that groups data and functions together. The data members are variables that hold the state of the object, and the member functions define the behavior of the object.

## Defining a Class

To define a class in C++, you use the `class` keyword followed by the class name and a pair of curly braces `{}`. Inside the curly braces, you can declare data members and member functions.

```cpp
class MyClass {
public:
    int myNumber; // Data member
    void myFunction() { // Member function
        // Function implementation
    }
};
```

## Creating Objects

Once a class is defined, you can create objects of that class type. An object is an instance of a class.

```cpp
MyClass obj; // Creating an object of MyClass
obj.myNumber = 5; // Accessing data member
obj.myFunction(); // Calling member function
```

## Access Specifiers

Access specifiers define the accessibility of the class members. The three access specifiers in C++ are:

- `public`: Members are accessible from outside the class.
- `private`: Members are accessible only within the class.
- `protected`: Members are accessible within the class and by derived class.

## Member Functions

Member functions are functions that operate on the data members of the class. They can be defined inside or outside the class definition.

```cpp
class MyClass {
public:
    void myFunction(); // Declaration
};

void MyClass::myFunction() { // Definition
    // Function implementation
}
```

## Constructors and Destructors

Constructors are special member functions that are called when an object is created. Destructors are called when an object is destroyed. They are used to initialize and clean up resources.

```cpp
class MyClass {
public:
    MyClass() { // Constructor
        // Initialization code
    }
    ~MyClass() { // Destructor
        // Cleanup code
    }
};
```

By understanding these basic concepts, you will be well on your way to mastering classes in C++.