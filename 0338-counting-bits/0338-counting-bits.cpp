class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0;i<n+1;i++){
            int noo =0;
            int num = i;
            for(int j=0;j<32;j++){
                if((num&1)==1) noo+=1;
                num>>=1;

            }
            ans[i]=noo;
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna