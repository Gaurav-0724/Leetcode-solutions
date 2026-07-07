class Solution {
public:
    int f(int n){
        int count = 0;
        while(n>0){
            if(n&1){
                count++;
            }
            n = n>>1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0 ; i<=n ; i++ ){
            int t = f(i);
            ans.push_back(t);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna