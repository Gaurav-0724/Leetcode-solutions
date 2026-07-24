class Solution {
  public:
    int cutRod(vector<int> &price) {
        // code here
        
        int n = price.size();
        if(n==0) return 0;
        if(n==1) return price[0];
        
        vector<int> dp(n+1,0);
        
        for(int i=1;i<=n;i++){
            dp[i] = price[i-1];
            
        }
        
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i/2;j++){
                dp[i] =max(dp[i],dp[j]+dp[i-j]);
            }
        }
        
        return dp[n];
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna