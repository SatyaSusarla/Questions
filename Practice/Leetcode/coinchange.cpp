class Solution {
public:
    
    int Memoization(vector<int>& coins, int amount, vector<int>& dp) {
       
        if (amount == 0) return 0;
      if (dp[amount] != -1) return dp[amount];
        
        int mini = INT_MAX;
        
        for (int i = 0; i < coins.size(); i++) {
            if (amount - coins[i] >= 0) {
                int tmp = Memoization(coins, amount - coins[i], dp);
                if (tmp != INT_MAX) {
                    int ans = 1 + tmp;
                    mini = min(ans, mini);
                }
            }
        }
        
        // Store the result in the memoization array
        dp[amount] = mini;
        return dp[amount];
    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, -1); // Initialize memoization array with -1
        int ans = Memoization(coins, amount, dp);
        return ans == INT_MAX ? -1 : ans;
    }
};