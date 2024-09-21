//Example-1.6.2 : This short C++ program will not compile because the function sum() is not prototyped:


# include <iostream >
using namespace std;


int sum (int a, int b)
    {
        return a+b;
    }


int main ()
    {
        int a, b, c;
        cout << " Enter two numbers of first : ";
        cin >> a;
        cout << " Enter two numbers of Second : ";
        cin >> b;
        c = sum(a, b);
        cout << "Sum is: " << c;
        return 0;
    }
    
// This function needs a prototype before main() to compile successfully:
// int sum (int a, int b)
//     {
//         return a+b;
//     }
