
#include <iostream>
using namespace std;
int main(){
   int hr,wage;
    cout<<"Enter how many hours you worked: ";
   cin>>hr;
   cout<<"Enter wage per hour: ";
   cin>>wage;
    int pay= hr*wage;
    cout<<"Gross pay is: "<<pay<<endl;
   return 0;
}
