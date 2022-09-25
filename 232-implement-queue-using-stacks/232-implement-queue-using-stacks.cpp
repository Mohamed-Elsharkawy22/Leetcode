class MyQueue {
    stack<int>st1;
    stack<int>st2;
    int front;
public:
    MyQueue() {
     
    }
    
    void push(int x) { //o(1)
        if(st1.empty())
            front=x;
        
        st1.push(x);
    }
    
    int pop() {
        //worstCase o(2*n), amortized o(1)
        if(st2.empty()){
            while(!st1.empty()){
                int a=st1.top();
                st1.pop();
                st2.push(a);
            }
        }
        int a = st2.top();
        st2.pop();
        return a;
    }
    
    int peek() { // o(1)
        if(st2.empty())
            return front;
    
        return st2.top();
    }
    
    bool empty() {
    
        return st1.empty() && st2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */