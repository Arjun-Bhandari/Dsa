#include <iostream>
using namespace std;

// Circular-array queue: FIFO (First In, First Out)
class Queue {
    int* arr;      // storage
    int capacity;  // max elements
    int front;     // index of the first element
    int rear;      // index of the last element
    int count;     // current number of elements

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        count = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() { return count == 0; }
    bool isFull() { return count == capacity; }
    int size() { return count; }

    // Add to the back
    void enqueue(int x) {
        if (isFull()) {
            cout << "Overflow: cannot enqueue " << x << endl;
            return;
        }
        rear = (rear + 1) % capacity;  // wrap around
        arr[rear] = x;
        count++;
        cout << "Enqueued " << x << endl;
    }

    // Remove from the front
    int dequeue() {
        if (isEmpty()) {
            cout << "Underflow: queue is empty" << endl;
            return -1;
        }
        int x = arr[front];
        front = (front + 1) % capacity;  // wrap around
        count--;
        cout << "Dequeued " << x << endl;
        return x;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void print() {
        cout << "Queue: ";
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(3);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);  // overflow
    q.print();

    q.dequeue();
    q.enqueue(40);  // reuses the freed slot (wraps around)
    q.print();

    cout << "Front: " << q.peek() << endl;
    cout << "Size: " << q.size() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();  // underflow

    return 0;
}
