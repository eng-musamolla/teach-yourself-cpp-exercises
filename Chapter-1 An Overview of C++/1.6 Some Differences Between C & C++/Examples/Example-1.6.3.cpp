//Example-1.6.3: Here is a short program that illustrates how local variables can be declared anywhere within a block:

#include <iostream >
using namespace std;
int main ()
{
int i; // local var declared at start of block
cout << " Enter number : ";
cin >> i;
// compute factorial
int j, fact =1; // vars declared after action statement
for (j=i; j >=1; j--)
fact = fact * j;
cout << " Factorial is " << fact ;
return 0;
}
