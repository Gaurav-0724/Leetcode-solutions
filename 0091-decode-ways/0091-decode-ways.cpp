class Solution {
public:
    int solve(int index,int n,string& s,vector<int>& dp){

        if(index==n){
            return 1;
        }
        if(s[index]=='0'){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }

        int ways = solve(index+1,n,s,dp);

        if(index+1<n){
            int num =(s[index]-'0')*10+ (s[index+1]-'0');
            if(num>=10 && num<=26){
                ways += solve(index+2,n,s,dp);
            }
        }

        return dp[index] =  ways;

        
        
    }

    int numDecodings(string s) {

        int n = s.size();
        vector<int> dp(n+1,-1);
        return solve(0,n,s,dp);

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna