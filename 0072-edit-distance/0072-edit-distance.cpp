class Solution {
public:
    int minsteps(int m,int n,string& word1,string& word2,vector<vector<int>>& dp){
        if(m==0){
            return n;
        }
        if(n==0){
            return m;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }


        if(word1[m-1]==word2[n-1]){
            return dp[m][n] = minsteps(m-1,n-1,word1,word2,dp);
        }

        else{
            int insert = 1+ minsteps(m,n-1,word1,word2,dp);
            int deleted = 1+ minsteps(m-1,n,word1,word2,dp);
            int replace = 1+ minsteps(m-1,n-1,word1,word2,dp);
            return dp[m][n] = min(insert,min(deleted,replace));
        }

    }
    int minDistance(string word1, string word2) {

        int m = word1.size(), n=word2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));

        return minsteps(m,n,word1,word2,dp);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna