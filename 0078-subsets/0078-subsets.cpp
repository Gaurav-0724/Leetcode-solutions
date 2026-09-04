class Solution {
public:
     void solve(int index, vector<int>& nums, vector<int>& curr,vector<vector<int>>& ans) {

        
        ans.push_back(curr);

        for (int i = index; i < nums.size(); i++) {

            
            curr.push_back(nums[i]);

            
            solve(i + 1, nums, curr, ans);

            
            curr.pop_back();
        }
     }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int> curr;
        vector<vector<int>> ans;

        solve(0,nums,curr,ans);

        return ans;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna