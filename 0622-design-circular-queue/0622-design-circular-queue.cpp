class MyCircularQueue {

    int* queue;
    int size;
    int front;
    int rear;
    
    
public:
    MyCircularQueue(int k) {

       size = k;

        queue = new int[k];
        front = -1;
        rear = -1;
        
    }
    
    bool enQueue(int value) {

        if((rear + 1) % size == front){

            return false;
        }
        else{

            if(front == -1 && rear == -1){

            front = rear = 0;
            queue[front] = value;
           
            }
            else{

               rear = (rear + 1) % size;
               queue[rear] = value;

            }

            return true;

        }

       
        
    }
    
    bool deQueue() {

        if(front == -1 && rear == -1){

            return false;
        }
        else{

            if(front == rear){

                front = -1;
                rear = -1;
            }
            else{

                front = (front + 1) % size;
            }
            return true;
        }
        
    }
    
    int Front() {

        if(front == -1 && rear == -1){

            return -1;
        }
       
       int value = queue[front];

       return value;
        
    }
    
    int Rear() {

        
        if(front == -1 && rear == -1){

            return -1;
        }
       
       int value = queue[rear];

       return value;
        
    }
    
    bool isEmpty() {

        if(front == -1 && rear == -1){

            return true;
        }
        else{

            return false;
        }
        
    }
    
    bool isFull() {

        if((rear + 1)% size == front){

            return true;
        }
        else{

            return false;
        }
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */