class Solution {
  public:
    int findways(int eggs,int moves,vector<vector<int>>& dp){
        if(eggs==0 || moves==0){
            return 0;
        }
        if(eggs==1){
            return moves;
        }
        if(dp[eggs][moves]!=-1){
            return dp[eggs][moves];
        }
        
        
        
        return dp[eggs][moves] = 1+ findways(eggs-1,moves-1,dp) + findways(eggs,moves-1,dp);
    }
    int eggDrop(int n, int k) {
        // code here
        int moves = 0;
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        while(findways(n,moves,dp)<k){
            moves++;
        }
        return moves;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna