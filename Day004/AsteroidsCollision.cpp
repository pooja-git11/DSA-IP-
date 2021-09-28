class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        stack<int> s;
        
        int n = asteroids.size();
        
        for(int i = 0; i < n; i++){
            
           if(not s.empty() and s.top() > 0 and asteroids[i] < 0){
                if(abs(asteroids[i]) == s.top())
                    s.pop();
                else if(abs(asteroids[i]) > s.top()){
                    s.pop();
                    i--;
                }
                    
           }else
                s.push(asteroids[i]);
        }
        
        while(not s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};