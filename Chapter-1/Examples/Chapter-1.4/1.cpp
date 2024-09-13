#include <iostream>
using namespace std;
int main ()
{
    int num ; // First variable
    // read the number
    cout << " Enter number to be tested : ";
    cin >> num ;
    // Find even or odd
    if (( num %2) ==0)
        cout << " Number is even \n";
    else
        cout << " Number is odd \n";
    return 0;
}
