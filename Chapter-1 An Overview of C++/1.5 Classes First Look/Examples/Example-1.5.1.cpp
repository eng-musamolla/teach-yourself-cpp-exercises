// Creation Date: 12-05-2021
// Examples 1.5.1 : As a simple first example, this program demonstrates myclass, described in the text. It sets the value of a of ob1 and ob2 and then displays a’s value for each object:


# include <iostream>
using namespace std;

class myclass {
    int a;
    public: 
    void set_a(int num);
    int get_a();
};

void myclass::set_a(int num) {
    a = num;
}


int myclass::get_a() {
    return a;
}


int main() {
    cout << "\n\n";

    myclass ob1, ob2;

    ob1.set_a(400);
    ob2.get_a();
    
    cout << "ob1.a: " << ob1.get_a() << endl;

    cout << "ob2.a: " << ob2.get_a() << endl;

    return 0;
}