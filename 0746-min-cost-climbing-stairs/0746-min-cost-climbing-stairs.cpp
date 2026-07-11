class Solution {
public:
    int mincost(int n,vector<int>& cost,vector<int>& dp){
        if(n<=1) return 0;

        if(dp[n]!=-1) return dp[n];

        int last = cost[n-1] + mincost(n-1,cost,dp);
        int slast = cost[n-2] + mincost(n-2,cost,dp);

        return dp[n] = min(last,slast);

    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,-1);
        return mincost(n,cost,dp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna