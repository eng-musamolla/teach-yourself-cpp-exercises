
#include<iostream>
using namespace std;
class  myclass {
    int a;

public:
    void set_a(int num) {
        a=num;
    }
    int get_a() {
        return a;
    }


};

int main() {
    myclass obj1, obj2;

    obj1.set_a(10);
    obj2.set_a(99);

    cout<<"Value of object 1: " << obj1.get_a() <<endl;
    cout<<"Value of Object 2: " << obj2.get_a() <<endl;
    return 0;
}