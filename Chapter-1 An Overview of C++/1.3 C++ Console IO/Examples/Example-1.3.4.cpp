// Ecample 1.3.4 : The next program promts the user for an integer value, a floating-point value, and  a string. It then uses one input statement to read all three.


#include <iostream>
using namespace std;

int main(){
    int i; 
    float f;
    char s[80];

    cout << "Enter an integer, float, and a string: ";
    cin >> i >> f >> s;
    cout << "you entered: " << i << ' ' << f << ' ' << s << endl;

    return 0;
}