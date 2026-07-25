class Solution {
public:
    int maximumProfit(int ind,int buy,int n,int fee,vector<int>& prices,vector<vector<int>>& dp){

        if(ind==n){
            return 0;
        }

        if(dp[ind][buy]!=-1){
            return dp[ind][buy];
        }


        if(buy){
            return dp[ind][buy]= max(-prices[ind] +maximumProfit(ind+1,0,n,fee,prices,dp),maximumProfit(ind+1,1,n,fee,prices,dp));
        }

        else{

            return dp[ind][buy] = max(prices[ind]-fee +maximumProfit(ind+1,1,n,fee,prices,dp),maximumProfit(ind+1,0,n,fee,prices,dp));
        }
    }

    int maxProfit(vector<int>& prices, int fee) {

        int n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));

        return maximumProfit(0,1,n,fee,prices,dp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna