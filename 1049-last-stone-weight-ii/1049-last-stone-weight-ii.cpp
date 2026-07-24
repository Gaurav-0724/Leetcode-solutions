class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {

        int n = stones.size();

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=stones[i];
        }
        int t =sum/2;

        vector<int> dp(t+1,0);

        for(int i=0;i<n;i++){
            for(int j=t;j>=stones[i];j--){

                dp[j] = max(dp[j],dp[j-stones[i]]+stones[i]);

            }
        }
    return sum - 2*dp[t];


        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna