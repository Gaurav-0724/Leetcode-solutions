class Solution {
  public:
    bool findsubset(int index,int k,vector<int>& arr,vector<vector<int>>& dp){
        if(k==0){
            return true;
        }
        if(index<0 || k<0){
            return false;
        }
        if(dp[index][k]!=-1){
            return dp[index][k];
        }
        
        return dp[index][k] = (findsubset(index-1,k,arr,dp) || findsubset(index-1,k-arr[index],arr,dp));
        
    }
    
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n= arr.size();
        // vector<vector<int>> dp(n,vector<int>(sum+1,0));
        // return findsubset(n-1,sum,arr,dp);
        // 
        vector<int> prev(sum+1,0);
        prev[0] =1;
        
        if(arr[0]<=sum) prev[arr[0]] =1;
        
        
        
        for(int i=1;i<n;i++){
            vector<int> curr(sum+1,0);
            curr[0]=1;
            for(int j=1;j<=sum;j++){
                if(j>=arr[i]){
                    curr[j] = (prev[j] || prev[j-arr[i]]);             
                    
                }
                else{
                    curr[j] = prev[j];
                }
            }
            prev = curr;
        }
        return prev[sum];
      
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna