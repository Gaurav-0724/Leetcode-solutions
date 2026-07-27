class Solution {
public:
    int palind(int start,int end,string& s,vector<vector<int>>& dp){

        if(start==end){
            return 1;
        }
        if(start>end) return 0;
        if(dp[start][end]!=-1){
            return dp[start][end];
        }

        if(s[start]==s[end]){
            return dp[start][end] = 2+ palind(start+1,end-1,s,dp);
        }
        else{
            return dp[start][end] = max(palind(start+1,end,s,dp),palind(start,end-1,s,dp));
        }
    }
    int longestPalindromeSubseq(string s) {
        int n = s.size();

        vector<vector<int>> dp(n,vector<int>(n,-1));
        
        return palind(0,n-1,s,dp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna