class Solution {
public:
    int maximumProfit(int ind,int buy,int transaction,int n,vector<int>& prices,vector<vector<vector<int>>>& dp){

        if(transaction==0 || ind==n){
            return 0;
        }

        if(dp[ind][buy][transaction]!=-1){
            return dp[ind][buy][transaction];
        }


        if(buy){
            return dp[ind][buy][transaction]= max(-prices[ind] +maximumProfit(ind+1,0,transaction,n,prices,dp),maximumProfit(ind+1,1,transaction,n,prices,dp));
        }

        else{

            return dp[ind][buy][transaction] = max(prices[ind]+maximumProfit(ind+1,1,transaction-1,n,prices,dp),maximumProfit(ind+1,0,transaction,n,prices,dp));
        }

    }


    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (2,vector<int> (3,-1)));

        return maximumProfit(0,1,2,n,prices,dp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna