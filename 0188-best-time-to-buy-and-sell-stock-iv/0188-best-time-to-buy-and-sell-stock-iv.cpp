class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();

        vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (2,vector<int> (k+1,0)));

        vector<vector<int>> prev(2,vector<int> (k+1,0));

        for(int i=n-1;i>=0;i--){
            vector<vector<int>> curr(2,vector<int> (k+1,0));
            for(int j=0;j<2;j++){
                for(int l=1;l<=k;l++){

                    if(j==1){
                        curr[j][l] = max(-prices[i]+ prev[0][l], prev[1][l]);
                    }
                    else{
                        curr[j][l] = max(prices[i]+ prev[1][l-1], prev[0][l]);
                    }
                }
            }
            prev = curr;
        }

        return prev[1][k];
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna