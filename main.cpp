#include <iostream>

using namespace std;

int main()
{
    char* windowsUsername = getenv("USERNAME");
    
    if (windowsUsername == nullptr) {
        cerr << "Unable to get the Windows username." << endl;
    } else {
        cout << endl;
        cout << endl;
        cout << "Hello Mr. " << windowsUsername << endl;
    }
    
    return 0;
}

