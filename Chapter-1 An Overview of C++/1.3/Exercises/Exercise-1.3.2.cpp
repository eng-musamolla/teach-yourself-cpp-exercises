
#include<iostream>
using namespace std;
int main() {
    int feet,inch;
    do {
        cout<< "Enter Feet: ";
        cin>>feet;
        inch=feet*12;

        cout<<feet<<"feet is equivalent to "<<inch<<endl;
    }
    while (feet!=0);
}