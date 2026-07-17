class Solution {
  public:
    int findsubset(int index,int target,vector<int>& arr,vector<vector<int>>& dp){
        if(index<0){
            return target==0;
        }
        if(target<0) return 0;
        
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        return dp[index][target] = findsubset(index-1,target,arr,dp) + findsubset(index-1,target-arr[index],arr,dp);
        
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n  =arr.size();
        vector<vector<int>> dp(n,vector<int> (target+1,-1));
        
        return findsubset(n-1,target,arr,dp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna