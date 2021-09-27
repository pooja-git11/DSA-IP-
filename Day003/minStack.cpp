class MinStack {
public:
    stack<long long > s;
    long long  minE;
    
    MinStack() {
            
    }
    
    void push(int val) {
        
        if(s.empty()){
            s.push(val);
            minE = val;
        }
        else if(val < minE){
            long long k = 0LL + val + val - minE; 
            s.push(k);
            minE = val;
        }else
            s.push(val);    
    }
    
    void pop() {
        if(s.top() < minE){
            minE = 2 * minE - s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.top() < minE){
            return minE;    
        }
        return s.top();
    }
    
    int getMin() {
        return minE;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */