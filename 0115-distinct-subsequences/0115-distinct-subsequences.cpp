class Solution {
public:
    int totalsub(int m,int n,string&s,string& t,vector<vector<int>>& dp){

        
        if(n==0) return 1;
        if(m==0) return 0;

        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        if(s[m-1]==t[n-1]){
            return dp[m][n]=totalsub(m-1,n-1,s,t,dp)+totalsub(m-1,n,s,t,dp);
        }
        else{
            return dp[m][n]=totalsub(m-1,n,s,t,dp);

        }
    }
    int numDistinct(string s, string t) {

        int m = s.size(), n= t.size();
        vector<vector<unsigned long long>> dp(m+1,vector<unsigned long long>(n+1,0));

        for(int i=0;i<=m;i++){
            dp[i][0] =1;
        }

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[m][n];
        // return totalsub(m,n,s,t,dp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna