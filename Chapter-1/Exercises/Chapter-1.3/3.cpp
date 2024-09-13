#include <iostream>
using namespace std;
int main ()
{
    int a, b, d, main ;
    cout << " Enter two numbers : ";
    cin >> a >> b;
    main = a > b ? b : a;
    for (d = 2; d<main; d++)
        if ((( a%d) ==0) && ((b%d) ==0) )
            break ;
    if(d== main )
    {
        cout << "No common denominators \n";
        return 0;
    }
    cout << "The lowest common denominator is " << d << " \n"
         ;
    return 0;
}
