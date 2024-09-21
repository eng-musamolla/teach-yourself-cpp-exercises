/* 
As an experiment, determine whether this comment (which nests a C-like comment within
a C++-style, single-line comment) is valid: 

*/ 

#include <iostream>
using namespace std;

int main() {
    /* 
    As an experiment, determine whether this comment (which nests a C-like comment within
    a C++-style, single-line comment) is valid: 
    // This is a single-line comment within a multi-line comment
    */
    
    cout << "Hello, World!" << endl;
    return 0;
}