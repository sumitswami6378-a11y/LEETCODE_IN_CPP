class MyCircularDeque {
    int* deque;
    int size;
    int front;
    int rear;

public:
    MyCircularDeque(int k) {

        size = k;

        deque = new int[size];

        front = -1;
        rear = -1;
    }

    bool insertFront(int value) {

        if ((rear + 1) % size == front) {
            return false;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = size - 1;
        }
        else {
            front--;
        }

        deque[front] = value;

        return true;
    }

    bool insertLast(int value) {

        if ((rear + 1) % size == front) {
            return false;
        }

        if (rear == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        deque[rear] = value;

        return true;
    }

    bool deleteFront() {

        if (front == -1) {
            return false;
        }

        // Only one element
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }

        return true;
    }

    bool deleteLast() {

        if (rear == -1) {
            return false;
        }

        // Only one element
        if (front == rear) {
            front = rear = -1;
        }
        else if (rear == 0) {
            rear = size - 1;
        }
        else {
            rear--;
        }

        return true;
    }

    int getFront() {

        if (front == -1) {
            return -1;
        }

        return deque[front];
    }

    int getRear() {

        if (rear == -1) {
            return -1;
        }

        return deque[rear];
    }

    bool isEmpty() {

        return front == -1;
    }

    bool isFull() {

        return (rear + 1) % size == front;
    }
};