class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        int number = 0;

        for (auto el : nums) {
            number ^= el;
        }

        unsigned int x = (unsigned int)number;
        int position = 0;

        while ((x & 1) == 0) {
            position++;
            x >>= 1;
        }

        int ans1 = 0;
        for (int i = 0; i < n; i++) {
            if ((nums[i] >> position) & 1) {
                ans1 ^= nums[i];
            }
        }

        int ans2 = number ^ ans1;
        return {ans1, ans2};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna