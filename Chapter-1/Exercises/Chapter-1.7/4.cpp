#include <iostream>
#include <cstdlib>
using namespace std;
void sleep (int n);
void sleep ( char *n);
# define DELAY 100000
int main ()
{
    cout << ".";
    sleep (3);
    cout << ".";
    sleep ("2");
    cout << ".";
    return 0;
}
void sleep (int n)
{
    long i;
    for ( ; n; n--)
        for (i=0; i< DELAY ; i++);

}
void sleep ( char *n)
{
    long i;
    int j;
    j = atoi (n);
    for ( ; j; j--)
        for (i=0; i< DELAY ; i++);

}
