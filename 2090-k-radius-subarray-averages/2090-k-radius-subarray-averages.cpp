class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {

        int n = nums.size();
        if(k==0){
            return nums;
        }

        vector<int> ans;
        if(2*k + 1 > n){
            for(int i=0;i<n;i++){
                ans.push_back(-1);
            }
            return ans;
        }

        long long sum =0;

        for(int i=0;i<k;i++){
            ans.push_back(-1);
            sum += nums[i];
        }

        if(n>k){
            for(int j=k;j<=2*k;j++){
                sum += nums[j];
            }
            ans.push_back(sum/((2*k)+1));
        }
        

        for(int i=k+1;i<n;i++){
            
            sum -= nums[i-k-1];
            if(n>i+k){
                sum += nums[i+k];
                ans.push_back(sum/((2*k)+1));
            }
            else{
                ans.push_back(-1);
            }

            
        }
        return ans;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna