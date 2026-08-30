class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int n = nums.size();

        long long sum = 0;
        long long maxi = 0;

        unordered_map<int, int>mp;

        int i=0;

        for(int j = 0; j < n; j++){

            sum += nums[j];
            mp[nums[j]]++;

            if(j-i+1 > k){
                sum -= nums[i];

                mp[nums[i]]--;

                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }

            if(j-i+1 == k && mp.size()==k){
                maxi = max(maxi,sum);
            }
        }

        return maxi;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna