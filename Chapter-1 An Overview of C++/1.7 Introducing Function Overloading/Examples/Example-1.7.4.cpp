// Exercise 1.7.4: It is important to understand that the return type alone is not a sufficient difference to allow function overloading. If two functions differ only in the type of data they return, the compiler will not always be able to select the proper one to call. For example, this fragment is incorrect because it is inherently ambiguous.



#include <iostream>
using namespace std;

int f1(int a);
double f1(double a);



int main() {
    cout << endl << endl;
        f1(10.5); 

    

    return 0;
}