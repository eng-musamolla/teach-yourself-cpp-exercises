#include <iostream>
using namespace std;

class Example {
public:
    void display() {
        string text = "Two integer and a double values: ";
        int a = 10, b = 20;
        double c = 10.2;
        cout << text << endl;
        cout << "Integer 1: " << a << endl;
        cout << "Integer 2: " << b << endl;
        cout << "Double value: " << c << endl;
    }
};

int main() {
    Example ex;
    ex.display();
    return 0;
}