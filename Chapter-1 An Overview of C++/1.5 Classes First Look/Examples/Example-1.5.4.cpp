// Creation Date: 12-05-2021

/* Example-1.5.3 : To get a taste of the power of objects, let’s look at a more practical example. This program
creates a class called stack that implements a stack that can be used to store characters:
*/


# include <iostream >
using namespace std;
# define SIZE 10
// Declare a stack class for characters
class stack {
    char stck[SIZE];
    int tos;
    public:
    void init(); // initialize stack
    void push(char ch); // push character on stack
    char pop(); // pop character from stack
};


// Initialize the stack
void stack::init() {
    tos = 0;
}


// Push a character
void stack::push(char ch) {
    if (tos==SIZE) {
        cout << "Stack is full" << endl;
        return;
    }

    stck[tos] = ch; 
    tos++;
}

// Pop a character
char stack::pop() {
    if (tos==0){
        cout << "Stack is empty" << endl;
        return 0;
    }

    tos--;
    return stck[tos];
}


int main() {
    stack s1, s2; // create two stack objects
    int i;

    //  initialize the stacks
    s1.init();
    s2.init();

    s1.push('a');
    s1.push('b');
    s1.push('c');


    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    
    for (i=0; SIZE!=i ; i++) {
        cout << "Pop Stack 1: " << s1.pop() << endl;
        cout << "Stack SIZE: " << SIZE << endl << "i: " << i << endl;
    }

    for (i=0; i<3; i++) {
        cout << "Pop s2: " << s2.pop() << endl;
    }

    return 0;

}
