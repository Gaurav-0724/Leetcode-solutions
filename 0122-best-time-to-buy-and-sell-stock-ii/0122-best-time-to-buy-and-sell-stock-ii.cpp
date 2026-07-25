class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int sum= 0;

        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                sum+= (prices[i]-prices[i-1]);
            }
        }

        return sum;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna