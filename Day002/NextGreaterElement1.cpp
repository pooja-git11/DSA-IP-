class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums2.size();
        map<int, int> mp;
        stack<int> s;
        
        for(int i = 0; i < n; i++){
              
            while(not s.empty() and nums2[s.top()] < nums2[i]){
                mp[nums2[s.top()]] = nums2[i];
                s.pop();
            }
            
            s.push(i);
                
        }
        
        n = nums1.size();
        vector<int> ans(n, -1);
        
        for(int i = 0; i < n; i++){
            if(mp.count(nums1[i]))
                ans[i] = mp[nums1[i]];
        }
        
        return ans;
    }
};