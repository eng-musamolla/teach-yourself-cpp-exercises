
#include<iostream>
using namespace std;

class stack {
    char stck[10];
    int tos;

public:
    void init() {
        tos =0;
    }

    void push(char ch) {
        if(tos==10) {
            cout<<"stack is full.";
        }
        stck[tos] = ch;
        tos++;
    }

    char pop() {
        if (tos==0) {
            cout<<"Stack is empty.";
        }
        tos--;
        return stck[tos];
    }

};

int main() {
    stack s1;
    s1.init();


    s1.push('a');
    s1.push('b');
    s1.push('c');

    for (int i=0; i<3; i++) {
        cout<< "First stack: " << s1.pop()<<endl;
    }
}







