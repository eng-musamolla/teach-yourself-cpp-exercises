
#include <iostream>
using namespace std;

class CircularQueue {
private:
    static const int SIZE = 100;
    int arr[SIZE];
    int front;
    int rear;
    int count;

public:

    CircularQueue() {
        front = 0;
        rear = 0;
        count = 0;
    }


    void enqueue(int value) {
        if (count == SIZE) {
            cout << "Queue is full. Cannot enqueue " << value << "." << endl;
            return;
        }
        arr[rear] = value;
        rear = (rear + 1) % SIZE;
        count++;
    }

    
    int dequeue() {
        if (count == 0) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1; // Return -1 to indicate an error
        }
        int value = arr[front];
        front = (front + 1) % SIZE;
        count--;
        return value;
    }


    void print() const {
        if (count == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < count; ++i) {
            cout << arr[(front + i) % SIZE] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;


    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);


    q.print();

    // Dequeuing an element
    cout << "Dequeued element: " << q.dequeue() << endl;


    q.print();

    
    q.enqueue(40);
    q.enqueue(50);

    // Printing the queue
    q.print();

    return 0;
}
