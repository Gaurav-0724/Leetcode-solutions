class Solution {
public:
    long long maxProfit(int index,int buy,int transaction,int n,vector<int>& prices,vector<vector<vector<int>>>& dp){

        if(transaction==0) return 0;

        if(index==n){
            
            return buy==1 ? INT_MIN : 0;
        }

        if(dp[index][buy][transaction]!=-1){
            return dp[index][buy][transaction];
        }



        if(buy==2){

            return max(maxProfit(index+1,2,transaction,n,prices,dp),max(-prices[index]+ maxProfit(index+1,0,transaction,n,prices,dp),prices[index]+maxProfit(index+1,1,transaction,n,prices,dp)));
        }

        else if(buy==1){

            return max(maxProfit(index+1,1,transaction,n,prices,dp),-prices[index]+ maxProfit(index+1,2,transaction-1,n,prices,dp));
        }

        else{

            return max(maxProfit(index+1,0,transaction,n,prices,dp),prices[index]+ maxProfit(index+1,2,transaction-1,n,prices,dp));
        }
    }

    long long maximumProfit(vector<int>& prices, int k) {

        int n = prices.size();

        vector<vector<vector<long long>>> dp(n+1,vector<vector<long long>>(3,vector<long long>(k+1,0)));

        for(int i=0;i<3;i++){
            for(int j=0;j<=k;j++){
                if(i==1){
                    dp[n][i][j] = INT_MIN;
                }
                else{
                    dp[n][i][j] = 0;
                }
            }
        }

        for(int i=n-1;i>=0;i--){
            for(int j=0;j<3;j++){
                for(int l=1;l<=k;l++){

                    if(j==2){

                        dp[i][j][l] = max(dp[i+1][2][l],max(-prices[i]+dp[i+1][0][l],prices[i]+dp[i+1][1][l]));
                    }

                    else if(j==1){

                        dp[i][j][l] = max(dp[i+1][1][l],-prices[i]+dp[i+1][2][l-1]);
                    }

                    else{
                        dp[i][j][l] = max(dp[i+1][0][l],prices[i]+dp[i+1][2][l-1]);
                    }
                }
            }
        }

        return dp[0][2][k];



        // return maxProfit(0,2,k,n,prices,dp);
        

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna