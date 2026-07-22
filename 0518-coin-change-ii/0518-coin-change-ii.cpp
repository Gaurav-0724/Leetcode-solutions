class Solution {
public:
    
    int change(int amount, vector<int>& coins) {
        int n= coins.size();

        vector<unsigned long long> prev(amount+1,0);

        prev[0] =1;

        for(int i=1;i<=n;i++){
            vector<unsigned long long> curr(amount+1,0);
            curr[0]=1;
            for(int j=1;j<=amount;j++){
                if(j>=coins[i-1]){
                    curr[j] = prev[j] + curr[j-coins[i-1]];
                }
                else curr[j] = prev[j];
            }
            prev = curr;
        }
        return (int)prev[amount];
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna