#include <iostream>
using namespace std;
int main ()
{
    int a, b, c, sum( );
    cout << " Enter two numbers : ";
    cin >> a >> b;
    c = sum(a, b);
    cout << "Sum is: " << c;
    return 0;
}
// Function needs a prototype
sum (int a, int b)
{
    return a+b;
}
