class Solution {
  public:
    int lcs(int m,int n,int& result,string&s1,string&s2,vector<vector<int>>& dp){
        
        if(m==0 || n==0){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        
        int answer = 0;
        if(s1[m-1]==s2[n-1]){
            answer = 1+ lcs(m-1,n-1,result,s1,s2,dp);
            result = max(result,answer);
        
        }
        lcs(m-1,n,result,s1,s2,dp);
        lcs(m,n-1,result,s1,s2,dp);
        return dp[m][n] = answer;
    }
    int longCommSubstr(string& s1, string& s2) {
        // code here
        int m =s1.size(), n = s2.size();
        int result =0;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        
        lcs(m,n,result,s1,s2,dp);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna