class Solution {
public:
    int f(int n){
        int number=0;
        while(n>0){
            number = number*10 +(n%10);
            n/=10; 
        }
        return number;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
            int t = f(nums[i]);
            s.insert(t);
            
        }
        return s.size();
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna