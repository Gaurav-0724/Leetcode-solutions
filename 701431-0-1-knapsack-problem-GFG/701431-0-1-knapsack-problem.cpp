class Solution {
  public:
    int findMax(int W,int n,vector<int>& val,vector<int>& wt,vector<vector<int>>& dp){
        if(W<0) return INT_MIN;
        if(n==0 || W==0) return 0;
        
        if(dp[W][n]!=-1){
            return dp[W][n];
        }
        
        
        return dp[W][n] = max(findMax(W,n-1,val,wt,dp),val[n-1]+findMax(W-wt[n-1],n-1,val,wt,dp));
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = wt.size();
        vector<vector<int>> dp(W+1,vector<int>(n+1,-1));
        return findMax(W,n,val,wt,dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna