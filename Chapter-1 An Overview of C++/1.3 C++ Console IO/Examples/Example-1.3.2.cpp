// Exampla 1.3.2 : It is possible to output more then one value in a single I/O expression. For example, this version of the program described in Example 1.3.1 Shows a more efficient way to code the output Statements:

#include <iostream>
using namespace std;

int main(){

    int i, j;
    double d;

    i = 2;
    j = 5;
    d = 3.14;

    cout << "Here are some values: " << i << ' ' << j << ' ' << d << endl;

    return 0;
}
