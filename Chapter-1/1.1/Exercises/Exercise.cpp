// Exercise 1. || Think about the way that classification and polymorphism play an important role in our day-today lives.


#include <iostream>
#include <vector>
#include <memory>


using namespace std;

// Base class
class Animal {
public:
    virtual void speak() const = 0; // Pure virtual function
    virtual ~Animal() = default; // Virtual destructor
};

// Derived class Dog
class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof!" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void speak() const override {
        cout << "Meow!" << endl;
    }
};

int main() {
    vector<unique_ptr<Animal>> animals;
    animals.push_back(make_unique<Dog>());
    animals.push_back(make_unique<Cat>());

    for (const auto& animal : animals) {
        animal->speak();
    }

    return 0;
}