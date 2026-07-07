class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int digit = 0;
        int one =1;
        for(int i=0;i<32;i++){
            int noo= 0;
            int noz= 0;
            for(int i=0;i<n;i++){
                if((nums[i]&1)==0) noz+=1;
                else noo+=1;
                nums[i]>>=1;
            }
            if(noo%3==1){
                digit = (digit|one);

            } 
            else digit = (digit|0);
            one<<=1;


        }
        return digit;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna