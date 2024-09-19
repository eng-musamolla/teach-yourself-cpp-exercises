#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

namespace example {
    class Base {
    public:
        virtual void display() const {
            cout << "Base class display function" << endl;
        }
    };

    class Derived : public Base {
    public:
        void display() const override {
            cout << "Derived class display function" << endl;
        }
    };

    template <typename T>
    void printType(const T& value) {
        cout << "Type: " << typeid(value).name() << ", Value: " << value << endl;
    }
}

int main() {
    using namespace example;

    bool boolean = true;
    char character = 'A';
    wchar_t wide_character = L'B';
    char16_t char16 = u'C';
    char32_t char32 = U'D';
    short short_integer = 1;
    int integer = 2;
    long long_integer = 3L;
    long long long_long_integer = 4LL;
    unsigned int unsigned_integer = 5U;
    float floating_point = 6.0f;
    double double_precision = 7.0;
    long double long_double = 8.0L;
    auto auto_variable = 9;
    decltype(auto_variable) decltype_variable = 10;

    const int constant = 11;
    volatile int volatile_variable = 12;
    static int static_variable = 13;
    extern int extern_variable;
    register int register_variable = 14;

    int* pointer = &integer;
    int& reference = integer;

    if (boolean) {
        cout << "Boolean is true" << endl;
    }

    switch (integer) {
        case 1:
            cout << "Integer is 1" << endl;
            break;
        case 2:
            cout << "Integer is 2" << endl;
            break;
        default:
            cout << "Integer is not 1 or 2" << endl;
            break;
    }

    for (int i = 0; i < 3; ++i) {
        cout << "For loop iteration: " << i << endl;
    }

    while (integer < 5) {
        cout << "While loop, integer: " << integer << endl;
        ++integer;
    }

    do {
        cout << "Do-while loop, integer: " << integer << endl;
        --integer;
    } while (integer > 2);

    try {
        throw runtime_error("Exception thrown");
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    Base base;
    Derived derived;
    Base* base_ptr = &derived;
    base_ptr->display();

    printType(integer);
    printType(double_precision);
    printType(string("Hello"));

    return 0;
}

int extern_variable = 15;