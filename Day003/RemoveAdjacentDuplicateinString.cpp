class Solution {
public:
    string removeDuplicates(string s) {
       int n = s.size();
        
       int i = 0;
        
       for(int i = 1; i < n; i++){
           
           while(i > 0 and s[i] == s[i - 1]){
               s.erase(i - 1, 2);
               i = i - 2;
           }
       }
        
        return s;
    }
};