
#include<iostream>
using namespace std;

void date(char* date) {
    cout<<"Date: " << date << endl;
}

void date(int month, int day, int year) {
    cout<<"Date: " << month << "-" << day << "-" << year;
}

int main() {
    date("10/11/2025");
    date(9, 21, 2025);

    return 0;
}