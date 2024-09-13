#include <iostream>
using namespace std;
#define SIZE 10 // Declare a stack class for characters
class stack
{
    char stck [ SIZE ];
    int tos ;
public :
    void init (); // initialize stack
    void push ( char ch);
    char pop ();
};
void stack :: init ()
{
    tos = 0;
}

void stack :: push ( char ch)
{
    if(tos == SIZE )
    {
        cout << " stack is full ";
        return ;
    }
    stck [tos ] = ch;
    tos ++;
}
char stack :: pop ()
{
    if( tos ==0)
    {
        cout << " Stack is empty ";
        return 0;
    }
    tos--;
    return stck [ tos ];
}
int main ()
{
    stack s1, s2;  // create two stacks
    int i;
// initialize the stacks
    s1. init ();
    s2. init ();
    s1. push ('a');
    s2. push ('b');
    s1. push ('c');

    for (i=0; i <3; i++)
        cout << "Pop s1: " << s1.pop () << "\n";
    for (i=0; i <3; i++)
        cout << "Pop s2: " << s2.pop () << "\n";
    return 0;
}
