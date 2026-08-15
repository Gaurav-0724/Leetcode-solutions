class Solution {
public:
    int countSubstrings(string s) {

         int n = s.size();
        
        vector<vector<bool>> dp(n,vector<bool>(n,0));
        int totalPalindrome =0;
        
        for(int i=0;i<n;i++){
            dp[i][i] =1;
        }
        
        for(int len=2;len<=n;len++){
            for(int i=0;i<=n-len;i++){
                int j = i+len-1;
                
                if(s[i]==s[j] && (len==2 || dp[i+1][j-1])){
                    dp[i][j] =1;
                    totalPalindrome++;
                    
                }
                
            }
        }
        return totalPalindrome+n;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna