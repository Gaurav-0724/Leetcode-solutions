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
        vector<int> dp(n+1,0);
        // return solve(0,n,s,dp);

        dp[n] =1;

        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                dp[i] =0;
            }
            else{
                 dp[i] = dp[i+1];

                if(i+1<n){
                    int num =(s[i]-'0')*10+ (s[i+1]-'0');
                    if(num>=10 && num<=26){
                        dp[i]+= dp[i+2];
                    }
                }
            }

            
        }
        return dp[0];

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna