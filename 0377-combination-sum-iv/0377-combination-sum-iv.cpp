class Solution {
public:
    int totalways(int n,int target,vector<int>& nums,vector<int>& dp){
        if(target==0) return 1;

        if(target<0) return 0;

        if(dp[target]!=-1) return dp[target];

        int result=0;
        for(int j=0;j<n;j++){
            result+= totalways(n,target-nums[j],nums,dp);
        }


        return dp[target] = result;

    }
    int combinationSum4(vector<int>& nums, int target) {

        int n = nums.size();
        vector<int> dp(target+1,-1);

        return totalways(n,target,nums,dp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna