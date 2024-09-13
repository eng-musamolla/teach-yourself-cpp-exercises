#include <iostream >
using namespace std;
# define SIZE 100
class q_type
{
int queue [ SIZE ]; // holds the queue
int head , tail ; // indices of head and tail
public :
q_type (); // constructor
void q(int num ); // store
int deq (); // retrieve
};
// Constructor
q_type :: q_type ()
{
head = tail = 0;
}
void q_type ::q(int num )
{
if( tail +1== head || ( tail +1== SIZE && ! head ))
    {
cout << " Queue is full \n";
return ;
}
tail ++;
if( tail == SIZE )
tail = 0; // cycle around
queue [ tail ] = num;
}
int q_type :: deq ()
{
if( head == tail )
{
cout << " Queue is empty \n";
return 0;
}
head ++;
if( head == SIZE )
head = 0; // cycle around
return queue [ head ];
}
int main ()
{
q_type q1 , q2;
int i;
for (i=1; i <=10; i++)
{
q1.q(i);
q2.q(i*i);
}
for (i=1; i <=10; i++)
{
cout << " Dequeue 1: " << q1.deq () << "\n";
cout << " Dequeue 2: " << q2.deq () << "\n";
}
return 0;
}
