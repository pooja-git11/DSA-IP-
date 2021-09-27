class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        
        for(int i = 0; i < n; i++){
            if(s[i] == '(' or s[i] == '{' or s[i] == '[')
                st.push(s[i]);
            else if(st.empty())
                return false;
            else{
                
               if(st.top() == '(' and s[i] == ')')st.pop();
               else if(st.top() == '{' and s[i] == '}')st.pop();
               else if(st.top() == '[' and s[i] == ']')st.pop();
               else
                   return false;
            }
        }
        
        return st.empty();
    }
};
 