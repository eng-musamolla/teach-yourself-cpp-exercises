//
// Created by opi on 9/11/24.
//
#include <iostream>
#include <cstdlib>
using namespace std;


void sleep(int a) {
    cout << "Computer is sleeping for: " << a<< endl;
}
void sleep(char* a) {
    int b= atoi(a);
    cout << "Computer is sleeping for: " << b<< endl;
}
int main() {
    sleep(10);
    sleep("10");
    return 0;
}