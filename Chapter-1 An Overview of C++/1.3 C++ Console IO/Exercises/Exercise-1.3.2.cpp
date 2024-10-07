// Exercise: 1.3.2 : Write a program that converts feet to inches. Prompt the user for feet and display the equivalent number of inches. Have your program repeat this process until the user enters 0 for the number of feet.

#include <iostream>
using namespace std;

int main() {
    int feet, inches;

    do {
        cout << "Enter Feet (enter 0 to exit): ";
        cin >> feet;

        if (feet != 0) {
            inches = feet * 12;

            cout << feet << " feet is equivalent to " << inches << " inches." << endl;
        }
    } while (feet != 0);

    return 0;
}
