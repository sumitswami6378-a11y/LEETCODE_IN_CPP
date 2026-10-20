class MinStack {

    int* st;
    int* getmin;
    int size;
    int gt;
public:
    MinStack() {
       
        size = 99999;
        st = new int[size];
        getmin = new int[size];
        gt = -1;
        
    }
    
    void push(int value) {

        if(gt == size -1){

            return;
        }
        else{
            gt++;
            st[gt] = value;


            if(gt == 0) {
            getmin[gt] = value;
            }
            else {
            getmin[gt] = min(value, getmin[gt - 1]);
             }
        }
        
    }
    
    void pop() {

        if(gt == -1){

            return;
        }
        else{

            gt--;
        }
        
    }
    
    int top() {

        if(gt == -1){

            return -1;
        }
        else{

            return st[gt];
        }
        
    }
    
    int getMin() {
        
        if(gt == -1){
            return -1;
        }
        else{

            
            
            return getmin[gt];
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */