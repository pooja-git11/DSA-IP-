class Solution {
public:
    int dp[100005][2];
    
    int solve(vector<int>& prices, int i, int n, int buy, int t){
        
        if(t == 0 or n == i)
            return 0;
        
        if(dp[i][buy] != -1)
            return dp[i][buy];
        
        if(buy){
            return dp[i][buy] = max(solve(prices, i + 1, n, !buy, t) - prices[i], 
                                    solve(prices, i + 1, n, buy, t));
        }else{
            return dp[i][buy] = max(solve(prices, i + 1, n, !buy, t - 1) + prices[i], 
                                    solve(prices, i + 1, n, buy, t));
        }
    }
    
    int maxProfit(vector<int>& prices) {
        
        memset(dp, -1, sizeof(dp));
        int n = prices.size();
        
        return solve(prices, 0, n, 1, 1);
    }
};