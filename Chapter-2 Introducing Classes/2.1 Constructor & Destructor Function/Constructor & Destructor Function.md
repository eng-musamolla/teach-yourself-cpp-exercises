# Constructor & Destructor Function

In C++, constructors and destructors are special member functions of a class that are used to initialize and clean up objects, respectively.

## Constructor

A constructor is a member function that is automatically called when an object of the class is created. It has the same name as the class and does not have a return type.

### Example

```cpp
class MyClass {
public:
    MyClass() {
        // Constructor code
    }
};
```

## Destructor

A destructor is a member function that is automatically called when an object of the class is destroyed. It has the same name as the class, preceded by a tilde (~), and does not have a return type.

### Example

```cpp
class MyClass {
public:
    ~MyClass() {
        // Destructor code
    }
};
```

## Key Points

- Constructors can be overloaded to provide different ways of initializing objects.
- Destructors cannot be overloaded; a class can only have one destructor.
- Constructors and destructors do not have return types, not even `void`.

## Usage

Constructors and destructors are essential for resource management, such as allocating and deallocating memory, opening and closing files, etc.

### Example

```cpp
class Resource {
public:
    Resource() {
        // Allocate resource
    }

    ~Resource() {
        // Deallocate resource
    }
};
```

In this example, the constructor allocates a resource when an object is created, and the destructor deallocates the resource when the object is destroyed.
