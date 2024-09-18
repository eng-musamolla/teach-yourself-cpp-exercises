
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[100];
    char address[200];

public:
    void store(char* n, char* addr) {
        strcpy(name, n);
        strcpy(address, addr);
    }


    void display() const {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Person person;
    Person person1;


    person.store("Opi", "Mirpur");
    person1.store("sharma", "Pallabi");


    person.display();
    person1.display();

    return 0;
}
