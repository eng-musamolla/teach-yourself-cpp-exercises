#include <iostream>
using namespace std;
#define SIZE 100

class CircularQueue {
private:
    int queue[SIZE];
    int head;
    int tail;

public:
    CircularQueue() : head(-1), tail(-1) {}

    bool isFull() {
        return (tail + 1) % SIZE == head;
    }

    bool isEmpty() {
        return head == -1;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        if (isEmpty()) {
            head = 0;
        }
        tail = (tail + 1) % SIZE;
        queue[tail] = item;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int item = queue[head];
        if (head == tail) {
            head = -1;
            tail = -1;
        } else {
            head = (head + 1) % SIZE;
        }
        return item;
    }

    void printQueue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = head;
        while (true) {
            cout << queue[i] << " ";
            if (i == tail) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue cq;
    for (int i = 0; i < 5; ++i) {
        cq.enqueue(i);
        cout << "Enqueued " << i << ": ";
        cq.printQueue();
    }

    for (int i = 0; i < 3; ++i) {
        int item = cq.dequeue();
        cout << "Dequeued " << item << ": ";
        cq.printQueue();
    }

    for (int i = 5; i < 8; ++i) {
        cq.enqueue(i);
        cout << "Enqueued " << i << ": ";
        cq.printQueue();
    }

    while (!cq.isEmpty()) {
        int item = cq.dequeue();
        cout << "Dequeued " << item << ": ";
        cq.printQueue();
    }

    return 0;
}
