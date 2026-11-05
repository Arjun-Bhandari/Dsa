class Queue {
    constructor(size) {
        this.capacity = size;
        this.arr = new Array(this.capacity);
        this.front = 0;
        this.rear = -1;
        this.count = 0;
    }

    isEmpty() {
        return this.count === 0;
    }

    isFull() {
        return this.count === this.capacity;
    }

    // insert from rear
    enQueue(x) {
        if (this.isFull()) {
            console.log("Queue is full");
            return;
        }

        this.rear = (this.rear + 1) % this.capacity;
        this.arr[this.rear] = x;
        this.count++;
    }

    // remove / delete from front
    deQueue() {
        if (this.isEmpty()) {
            console.log("Queue is Empty Nothing to delete");
            return;
        }

        const removed = this.arr[this.front];
        this.front = (this.front + 1) % this.capacity;
        this.count--;
        return removed;
    }

    peek() {
        if (this.isEmpty()) {
            console.log("Queue is empty");
            return undefined;
        }
        return this.arr[this.front];
    }

    print() {
        if (this.isEmpty()) {
            console.log("Queue is empty");
            return;
        }

        for (let i = 0; i < this.count; i++) {
            console.log(this.arr[(this.front + i) % this.capacity]);
        }
    }
}



let q = new Queue(5);

q.enQueue(10);
q.enQueue(20);
q.enQueue(30);
q.enQueue(40);
q.enQueue(50);

q.print();

console.log("Peek: " + q.peek());

console.log("Dequeue: " + q.deQueue());
console.log("Dequeue: " + q.deQueue());

q.print();
console.log("Peek: " + q.peek());