
class FrontMiddleBackQueue {

    int* arr;
    int front;
    int rear;
    int size;
    int count;

public:

    FrontMiddleBackQueue() {

        size = 1000;
        arr = new int[size];

        front = -1;
        rear = -1;
        count = 0;
    }

    void pushFront(int val) {

        if (count == size) {
            return;
        }

        if (front == -1 && rear == -1) {

            front = 0;
            rear = 0;
        }
        else {

            front = (front - 1 + size) % size;
        }

        arr[front] = val;
        count++;
    }

    void pushMiddle(int val) {

        if (count == size) {
            return;
        }

        if (count == 0) {

            front = 0;
            rear = 0;
            arr[front] = val;
            count++;

            return;
        }

        int middle = count / 2;

        // Middle ke baad wale elements ko right shift karo
        for (int i = count; i > middle; i--) {

            int current = (front + i) % size;
            int previous = (front + i - 1) % size;

            arr[current] = arr[previous];
        }

        int index = (front + middle) % size;

        arr[index] = val;

        rear = (rear + 1) % size;

        count++;
    }

    void pushBack(int val) {

        if (count == size) {
            return;
        }

        if (front == -1 && rear == -1) {

            front = 0;
            rear = 0;
        }
        else {

            rear = (rear + 1) % size;
        }

        arr[rear] = val;
        count++;
    }

    int popFront() {

        if (count == 0) {
            return -1;
        }

        int num = arr[front];

        if (front == rear) {

            front = -1;
            rear = -1;
        }
        else {

            front = (front + 1) % size;
        }

        count--;

        return num;
    }

    int popMiddle() {

        if (count == 0) {
            return -1;
        }

        // Even size par left-middle remove hoga
        int middle = (count - 1) / 2;

        int index = (front + middle) % size;

        int num = arr[index];

        // Middle ke baad wale elements ko left shift karo
        for (int i = middle; i < count - 1; i++) {

            int current = (front + i) % size;
            int next = (front + i + 1) % size;

            arr[current] = arr[next];
        }

        if (count == 1) {

            front = -1;
            rear = -1;
        }
        else {

            rear = (rear - 1 + size) % size;
        }

        count--;

        return num;
    }

    int popBack() {

        if (count == 0) {
            return -1;
        }

        int num = arr[rear];

        if (front == rear) {

            front = -1;
            rear = -1;
        }
        else {

            rear = (rear - 1 + size) % size;
        }

        count--;

        return num;
    }
};
