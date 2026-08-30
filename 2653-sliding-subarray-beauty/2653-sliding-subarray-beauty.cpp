class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        
        int n = nums.size();

        vector<int> ans;
        
        vector<int> freq(101, 0);

        for(int i = 0; i < k; i++){
            freq[nums[i]+50]++;

        }

        for(int i = 0; i <= n-k; i++){
            
            int count = 0;
            int beauty = 0;

            for(int num = -50; num <0; num++){
                count += freq[num + 50];

                if (count >= x) {
                    beauty = num;
                    break;
                }
            }

            ans.push_back(beauty);

            if (i < n - k) {
                freq[nums[i] + 50]--;       
                freq[nums[i + k] + 50]++;   
            }

        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna