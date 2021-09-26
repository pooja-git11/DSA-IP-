class MyStack {
public:
    queue<int> q;
    MyStack() {    
    
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        
        queue<int> q1;
        
        while(q.size() != 1){
            q1.push(q.front());
            q.pop();
        }
        int e = q.front();
        q.pop();  
        while(not q1.empty()){
            q.push(q1.front());
            q1.pop();
        }
        return e;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        
        if(q.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */