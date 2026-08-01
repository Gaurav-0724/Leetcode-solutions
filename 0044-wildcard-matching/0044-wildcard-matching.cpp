class Solution {
public:
    bool matched(int m,int n,string& s,string& p,vector<vector<int>>& dp){

        if(m==0 && n==0){
            return 1;
        }
        if(n==0 && m){
            return 0;
        }
        if(m==0){
            for(int i=0;i<n;i++){
                if(p[i]!='*') return 0;
            }
            return 1;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }

        if(p[n-1]=='?'){
            return dp[m][n] =  matched(m-1,n-1,s,p,dp);
        }
        else if(p[n-1]=='*'){
            return dp[m][n] = matched(m,n-1,s,p,dp) || matched(m-1,n,s,p,dp);
        }
        else if(s[m-1]==p[n-1]){
            return dp[m][n] = matched(m-1,n-1,s,p,dp);
        }
        else{
            return dp[m][n] = 0;
        }
    }
    bool isMatch(string s, string p) {

        int m = s.size(), n=p.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return matched(m,n,s,p,dp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna