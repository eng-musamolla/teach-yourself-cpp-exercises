#include <iostream>
#include <ctime>
using namespace std;
class timer
{
clock_t start ;
public :
timer (); // constructor
~timer (); // destructor
};
timer :: timer ()
{
start = clock ();
}
timer ::~timer ()
{
clock_t end ;
end = clock ();
cout << " Elapsed time : " << (end - start ) / CLOCKS_PER_SEC
<< "\n";
}
int main ()
{
timer ob;
char c;
cout << " Press a key followed by ENTER : ";
cin >> c;
return 0;
}
