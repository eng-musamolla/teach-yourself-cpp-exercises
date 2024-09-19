
#include<iostream>
using namespace std;
int main() {
    char value;

    cout<<"Enter x to stop:" <<endl;
    do {
        cout<<": ";
        cin>>value;
    }
    while (value!='x');
}
