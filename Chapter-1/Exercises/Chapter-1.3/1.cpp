#include <iostream>
using namespace std;

int main() {
    double hours, wage;
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter wage per hour: ";
    cin >> wage;
    cout << "Pay is: " << wage * hours << endl;
    return 0;
}