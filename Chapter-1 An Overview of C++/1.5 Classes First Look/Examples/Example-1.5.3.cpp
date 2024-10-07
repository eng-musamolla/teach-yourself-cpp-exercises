// Creation Date: 12-05-2021

/* Example-1.5.3 : Just as there can be public member functions, there can be public member variables
as well. For example, if a were declared in the public section of myclass a could be
referenced by any part of the program, as shown here:
*/


# include <iostream>
using namespace std;

class myclass {
    public :
    int a;
};


int main ()
{
    cout << endl << endl;
    myclass ob1 , ob2 ;
    ob1.a = 100; 
    ob2.a = 909; 
    cout << ob1 .a << endl;
    cout << ob2 .a << endl;
    
    cout << endl << endl;
    return 0;
}

















// #include<iostream>
// using namespace std;

// class stack {
//     char stck[10];
//     int tos;

// public:
//     void init() {
//         tos =0;
//     }

//     void push(char ch) {
//         if(tos==10) {
//             cout<<"stack is full.";
//         }
//         stck[tos] = ch;
//         tos++;
//     }

//     char pop() {
//         if (tos==0) {
//             cout<<"Stack is empty.";
//         }
//         tos--;
//         return stck[tos];
//     }

// };

// int main() {
//     stack s1;
//     s1.init();


//     s1.push('a');
//     s1.push('b');
//     s1.push('c');

//     for (int i=0; i<3; i++) {
//         cout<< "First stack: " << s1.pop()<<endl;
//     }
// }







