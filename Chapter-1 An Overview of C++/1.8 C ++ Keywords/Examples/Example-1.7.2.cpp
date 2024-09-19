
#include<iostream>
using namespace std;

void date(char* date) {
    cout<<"Date: " << date << endl;
}

void date(int month, int day, int year) {
    cout<<"Date: " << month << "-" << day << "-" << year;
}

int main() {
    date("9/10/2024");
    date(8, 20, 2024);

    return 0;
}