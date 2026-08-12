class Solution {
public:
    int atmost(vector<int>& nums,int goal){
        int n = nums.size();
        if(goal<0) return 0;

        int l=0,r=0,sum=0,count=0;

        while(r<n){
            sum+= nums[r];

            while(sum>goal){
                sum = sum-nums[l];
                l++;
            }
            count= count+(r-l+1);
            r = r+1;


        }
        return count;

    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal) - atmost(nums,goal-1);

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna