#include <iostream >
using namespace std;
int main ()
{
    int i, j, fact =1;;
    cout << " Enter number : ";
    cin >> i;
    for (j=i; j >=1; j--)
        fact = fact * j;
    cout << " Factorial is " << fact ;
    return 0;
}
