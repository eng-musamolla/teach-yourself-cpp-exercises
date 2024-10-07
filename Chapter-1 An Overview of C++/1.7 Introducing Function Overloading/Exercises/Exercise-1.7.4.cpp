/*
Example-1.7.4: Create a function called sleep() that pauses the computer for the number of seconds
specified by its single argument. Overload sleep() so it can be called with either an
integer or a string representation of an integer. For example, both of these calls to sleep()
will cause the computer to pause for 10 seconds:

sleep (10) ;
sleep ("10");

Demonstrate that your functions work by including them in a short program. (Feel free
to use a delay loop to pause the computer.)

*/


#include <iostream>
#include <windows.h> 
#include <string> 

using namespace std;


void sleep(int seconds) {
    cout << "Sleeping for " << seconds << " seconds..." << endl;
    Sleep(seconds * 1000);  
    cout << "Woke up!" << endl;
}


void sleep(string seconds_str) {
    int seconds = stoi(seconds_str);  
    cout << "Sleeping for " << seconds << " seconds..." << endl;
    Sleep(seconds * 1000);  
    cout << "Woke up!" << endl;
}

int main() {
    sleep(10);       
    
    return 0;
}
