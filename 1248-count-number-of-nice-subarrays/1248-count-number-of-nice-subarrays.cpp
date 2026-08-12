class Solution {
public:
    int atmost(vector<int>& nums,int goal){
        int n = nums.size();
        if(goal<0) return 0;

        int l=0,r=0,sum=0,count=0;

        while(r<n){
            sum+= nums[r]%2;

            while(sum>goal){
                sum = sum-nums[l]%2;
                l++;
            }
            count= count+(r-l+1);
            r = r+1;


        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {

        return atmost(nums,k) - atmost(nums,k-1);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna