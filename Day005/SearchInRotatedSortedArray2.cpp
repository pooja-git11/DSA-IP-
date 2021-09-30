//only passed 271 / 279
class Solution {
public:
    int peakIndex(vector<int>&nums, int start, int end, int n){
        
        while(start <= end){
            
             if(nums[start] < nums[end])
                 return start;
            int mid = start + (end - start) / 2;
            int next = (mid + 1) % n;
            int prev = (n + mid - 1) % n;
            
            if(nums[mid] <= nums[next] and nums[mid] <= nums[prev])
                return mid;
            if(nums[start] <= nums[mid])
                start = mid + 1;
            else if(nums[mid] <= nums[end])
                end = mid - 1;
        }
        
        return -1;
    }
    int binarySearch(int target, vector<int>&nums, int start, int end){
        
        while(start <= end){
            
            int mid = start + (end - start) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int start = 0;
        int end = n - 1;
        int peak;
        
        peak = peakIndex(nums, start, end, n);
       // cout << peak;
        int res = binarySearch(target, nums, start, peak - 1);
        if(res == - 1)
            res = binarySearch(target, nums, peak, end);
        return res != -1;
       // return true;
    }
};