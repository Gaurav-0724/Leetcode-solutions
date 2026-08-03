class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<int> lis(n,1);
        vector<int> count(n,1);
        int maxlen =0;

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(lis[i]<1+lis[j]){
                        lis[i] = 1+lis[j];
                        count[i] = count[j];
                    }
                    else if(lis[i]==1+lis[j]){
                        count[i]+= count[j];
                    }
                    

                }
            }
            maxlen = max(maxlen,lis[i]);
        }

        int result =0;
        for(int i=0;i<n;i++){
            if(lis[i]==maxlen){
                result+=count[i];
            }
        }
        return result;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna