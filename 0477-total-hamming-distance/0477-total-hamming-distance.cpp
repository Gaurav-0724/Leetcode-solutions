class Solution {
public:

    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<32;i++){
            int noo = 0;
            int noz=0;
            for(int j=0;j<n;j++){
                if((nums[j]&1)==1) noo+=1;
                else noz+=1;
                nums[j]>>=1;
            }
            sum+= noz*noo;
        }
        return sum;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna