class Solution {
public:
    int totalsub(int n, vector<int>& nums,int k){
        int l=0, r=0,count=0;
        map<int,int> mp;

        while(r<n){

            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            if(mp.size()<=k){
                count+= r-l+1;
            }
            r++;

        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int n = nums.size();

        return (totalsub(n,nums,k)- totalsub(n,nums,k-1));

        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna