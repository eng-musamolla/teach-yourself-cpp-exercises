# Class, Structures & Unions are Related

In C++, classes, structures, and unions are closely related. They share many similarities but also have distinct differences. This section will explore these relationships and differences.

## Classes

A class in C++ is a user-defined type that can contain data members and member functions. It provides a way to encapsulate data and functions that operate on that data.

```cpp
class MyClass {
public:
    int data;
    void display() {
        std::cout << data << std::endl;
    }
};
```

## Structures

A structure is similar to a class but with a key difference: by default, all members of a structure are public.

```cpp
struct MyStruct {
    int data;
    void display() {
        std::cout << data << std::endl;
    }
};
```

## Unions

A union is a special data type that allows storing different data types in the same memory location. Only one of the members can be accessed at a time.

```cpp
union MyUnion {
    int intData;
    float floatData;
};
```

## Key Differences

- **Default Access Specifier**: In a class, members are private by default, whereas in a structure, they are public.
- **Memory Management**: Unions share the same memory location for all their members, which can save space but requires careful management.

Understanding these differences and similarities is crucial for effective C++ programming.
