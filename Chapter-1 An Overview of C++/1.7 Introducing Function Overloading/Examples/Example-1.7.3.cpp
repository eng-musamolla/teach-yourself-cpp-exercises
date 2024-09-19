
#include<iostream>
using namespace std;

void overload(int a) {
    cout<<"One parameter: " << a <<endl;
}
void overload(int a, int b) {
    cout<<"Two parameter: " << a << " and " << b;
}
int main() {
    overload(100);
    overload(100,200);
    return 0;
}