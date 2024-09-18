
# include <iostream>
using namespace std ;
# define SIZE 10
// Declare a stack class for characters .
class stack
{
    char stck [ SIZE ]; // holds the stack
    int tos ; // index of top of stack
    public :
    stack () ; // constructor
    void push ( char ch ) ; // push character on stack
    char pop () ; // pop character from stack
};
// Initialize the stack .
stack :: stack ()
{
    cout << " Constructing a stack \ n " ;
    tos = 0;
}
// Push a character
void stack :: push ( char ch )
{
    if ( tos == SIZE )
    {
        cout << " Stack is full " << endl ;
        return ;
    }
    stck [ tos ] = ch ;
    tos ++;
}
// Pop a character
char stack :: pop ()
{
    if ( tos ==0)
    {
        cout << " Stack is empty " << endl ;
        return 0; // return null on empty stack
    }
    tos--;
    return stck [ tos ];
}
int main ()
{
    // Create two stacks that are automatically initialized .
    stack s1 , s2 ;
    int i ;
    s1.push('a') ;
    s2.push('x');
    s1 . push ('b') ;
    s2 . push ('y') ;
    s1 . push ('c') ;
    s2 . push ('z') ;
    for ( i =0; i <3; i ++)
    cout << " Pop s1 : " << s1 . pop () <<endl;
    for ( i =0; i <3; i ++)
    cout << " Pop s2 : " << s2 . pop () <<endl ;

    return 0;
}