#include <iostream>
using namespace std;
class myclass
{
public : // now a is public
    int i;
};
int main ()
{
    myclass ob1, ob2 ; // here a is accessed directly
    ob1 .i = 40;
    ob2 .i = 44;
    cout << ob1 .i << "\n";
    cout << ob2 .i << "\n";
    return 0;
}
