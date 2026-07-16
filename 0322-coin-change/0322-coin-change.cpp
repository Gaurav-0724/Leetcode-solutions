class Solution {
public:
    int findMinCoin(int n,int amount,vector<int>&coins,vector<vector<int>>& dp){
        if(amount==0) return 0;

        if(n==0 || amount<0) return 1e9;

        if(dp[n][amount]!=-1){
            return dp[n][amount];
        }
        
        return dp[n][amount] = min(findMinCoin(n-1,amount,coins,dp),1+findMinCoin(n,amount-coins[n-1],coins,dp));
    }

    int coinChange(vector<int>& coins, int amount) {

        int n= coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        // int answer = findMinCoin(n,amount,coins,dp);

        // return answer>=1e9 ? -1: answer;
        for(int j=0;j<=amount;j++){
            dp[0][j] = 1e9;
        }
        for(int i=0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(j-coins[i-1]>=0){
                    dp[i][j] = min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][amount]>=1e9? -1: dp[n][amount];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna