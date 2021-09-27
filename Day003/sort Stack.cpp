/* The below method sorts the stack s 
you are required to complete the below method */

void insert(int val, stack<int>& s){
   
    if(s.empty()){
        s.push(val);
        return;
    }
     //cout << s.top() << " ";
     
   if(s.top() <= val){
        s.push(val);
        return;
    }
    
    
    int v = s.top();
    s.pop();
    insert(val, s);
    s.push(v);
    
    
}

void SortedStack :: sort()
{
   //Your code here
   if(s.size() <= 1)
    return;
    
  int val = s.top();

  s.pop();
  sort();
  
  insert(val, s);
  
}
