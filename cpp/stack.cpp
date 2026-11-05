#include <iostream>
using namespace std;

class Stack {
private:
    int items[10];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == 9;
    }

    void push(int val) {
        if (isFull()) {
            cout << "Stack is Full" << endl;
            return;
        }
        items[++topIndex] = val;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return items[topIndex--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return items[topIndex];
    }

    int len() {
        return topIndex + 1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.peek() << endl;
    cout << "Size: " << s.len() << endl;

    cout << "Pop: " << s.pop() << endl;
    cout << "Pop: " << s.pop() << endl;
    cout << "Top: " << s.peek() << endl;

    return 0;
}