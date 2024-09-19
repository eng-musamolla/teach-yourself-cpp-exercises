
#include<iostream>
#include<string>
using namespace std;
class card {
    string tittle;
    string author;
    int copies;

public:
    void store(string t, string a, int c) {
        tittle=t;
        author=a;
        copies=c;
    }

    void show() {
        cout << "Tittle: " << tittle << endl;
        cout << "Author: " << author << endl;
        cout << "Copies: " << copies << endl;
    }
};

int main() {
    card book1, book2;
    book1.store("First Book", "Bola jabe na", 10);
    book2.store("Second Book", "Name bolle chakri thakbe na", 5);

    cout<<"Book1 Info:"<< endl;
    book1.show();
    cout<<endl;

    cout<<"Book2 Info:" <<endl;
    book2.show();

    return 0;
}
