// EXERCISES 1.3.1: write a program that inputs the number of hours that an employee works and the employee’s wage. Then display the employee’s gross pay. (Be sure to prompt for input.)

#include <iostream>
using namespace std;

int main() {
    int hoursWorked;
    double wagePerHour;

    cout << "Enter the number of hours you worked: ";
    cin >> hoursWorked;

    cout << "Enter your wage per hour: ";
    cin >> wagePerHour;

    double grossPay = hoursWorked * wagePerHour;

    cout << "Your gross pay is: $" << grossPay << endl;

    return 0;
}

