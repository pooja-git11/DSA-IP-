class MyQueue {
public:
    stack<int> s;
    stack<int> s2;
    
    MyQueue() {    
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        int e;
        if(s2.empty()){
            
            while(not s.empty()){
                s2.push(s.top());
                s.pop();
            }
    
        }
        e = s2.top();
        s2.pop();
        return e;
    }
    
    int peek() {
        int e;
        
        if(s2.empty()){
            while(not s.empty()){
                s2.push(s.top());
                s.pop();
            }
        }
        e = s2.top();
        
        return e;
    }
    
    bool empty() {
        return  s2.empty() and s.empty();
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