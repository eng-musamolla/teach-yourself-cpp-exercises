#include <iostream>
#include <string>

using namespace std;

class Card {
private:
    string title;
    string author;
    int copiesOnHand;

public:
    void store(const string& bookTitle, const string& bookAuthor, int numCopies) {
        title = bookTitle;
        author = bookAuthor;
        copiesOnHand = numCopies;
    }

    void show() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies on hand: " << copiesOnHand << endl;
    }
};

int main() {
    cout << endl << endl;

    Card book;
    book.store("The C++ Programming Language", "Bjarne Stroustrup", 5);
    book.show();

    return 0;
}