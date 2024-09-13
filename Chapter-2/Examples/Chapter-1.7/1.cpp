#include <iostream >
using namespace std;
int abs (int a);
long abs ( long a);
double abs( double a);
int main ()
{
    cout << " Absolute value of -10: " << abs ( -10) << "\n";
    cout << " Absolute value of -10L: " << abs ( '-10L') << "\n";
    cout << " Absolute value of -10.01: " << abs ( -10.01) << "\n";
    return 0;
}
int abs (int a)
{
    cout << "In integer abs ()\n";
    return a <0 ? -a : a;
}
long abs ( long a)
{
    cout << "In long abs ()\n";
    return a <0 ? -a : a;
}
double abs( double a)
{
    cout << "In double abs ()\n";
    return a <0 ? -a : a;
}
