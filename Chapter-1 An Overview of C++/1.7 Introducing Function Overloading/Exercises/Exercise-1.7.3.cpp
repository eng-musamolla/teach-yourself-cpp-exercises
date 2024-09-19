

#include<iostream>
using namespace std;

char min(char a, char b) {
    return (a<b) ? a : b;
}
int min(int a, int b) {
    return (a<b) ? a : b;
}
double min(double a, double b) {
    return (a<b) ? a : b;
}

int main() {
    char g='B' , h='F';
    int c= 6, d=10;
    double e=10.5, f=30.5;
    cout << "Smaller Character: " << min(g,h)<<endl;
    cout << "Smaller Integer: " << min(c,d)<<endl;
    cout << "Smaller Double: " << min(e,f);
    return 0;
}