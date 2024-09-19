
#include <iostream>
using namespace std;
int main(){
   int hr,amount;
    cout<<"Enter how many hours you worked: ";
   cin>>hr;
   cout<<"Enter amount per hour: ";
   cin>>amount;
    int pay= hr*amount;
    cout<<"Gross pay is: "<<pay<<endl;
   return 0;
}
