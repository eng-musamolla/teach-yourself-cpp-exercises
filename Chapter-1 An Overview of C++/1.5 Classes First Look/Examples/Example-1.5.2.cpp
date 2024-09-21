// Creation Date: 12-05-2021

/* Example-1.5.2 : In myclass from the preceding example, a is private. This means that only member
functions of myclass can access it directly. (This is one reason why the public function
get a() is required.) If you try to access a private member of a class from some part
of your program that is not a member of that class, a compile-time error will result.
For example, assuming that myclass is defined as shown in the preceding example, the
following main() function will cause an error:
*/


# include <iostream>
using namespace std;

class myclass {
    // private to myclass
    public: // if we remove this line, then the error will be welcomed 🥱
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


int main ()
{
    myclass ob1 , ob2 ;
    ob1.a = 10; // ERROR ! cannot access private member
    ob2.a = 99; // by non - member functions .
    cout << ob1 . get_a () << "\n";
    cout << ob2 . get_a () << "\n";
    return 0;
}
