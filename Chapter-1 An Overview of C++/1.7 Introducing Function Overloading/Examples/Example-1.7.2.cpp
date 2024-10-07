

/*
Function Overloading
The problem in the code snippet is that there are two main() functions and two sets of date() function definitions. This will cause a compilation error due to multiple definitions of the same functions. Let's clean up the code by removing the commented-out main() function and the redundant date() function definitions.
*/


#include <iostream>
using namespace std;

void date(char* date); 
void date(int month, int day, int year); 


void date(char* date) {
    cout << "Date char: " << date << "\n";
}


void date(int month, int day, int year) {
    cout << "Date int: " << month << "/" << day << "/" << year << "\n";
}

int main() {
    date("8/23/24");
    date(8, 23, 24);
    return 0;
}