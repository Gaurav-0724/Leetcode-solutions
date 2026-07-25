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

        vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (2,vector<int> (3,0)));

        for(int i=n-1;i>=0;i--){
            for(int j=0;j<2;j++){
                for(int k=1;k<3;k++){

                    if(j==1){
                        dp[i][j][k] = max(-prices[i]+ dp[i+1][0][k], dp[i+1][1][k]);
                    }
                    else{
                        dp[i][j][k] = max(prices[i]+ dp[i+1][1][k-1], dp[i+1][0][k]);
                    }
                }
            }
        }

        return dp[0][1][2];

        // return maximumProfit(0,1,2,n,prices,dp);




        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna