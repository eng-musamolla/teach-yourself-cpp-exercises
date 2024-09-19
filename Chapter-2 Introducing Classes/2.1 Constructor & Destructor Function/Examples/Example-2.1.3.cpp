
#include<iostream>
#include<ctime>
using namespace std;

class  Timer {
    clock_t start;

public:
    Timer() {
        start=clock();
    }
    ~Timer() {
        clock_t end;
        end = clock();
        cout<< "Elapsed time: " << (end-start) / CLOCKS_PER_SEC << endl;
    }

};

int main() {
    Timer ob;

    char c;

    cout<<"Enter a key: ";

    cin>>c;
}

