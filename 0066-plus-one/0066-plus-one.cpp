class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n= digits.size();
        vector<int> ans;

        int carry=1;
        for(int i=n-1;i>=0;i--){
            int number = carry+ digits[i];
            if(number>9){
                ans.push_back(0);
                carry=1;
            }
            else{
                ans.push_back(number);
                carry=0;
            }


        }
        if(carry==1){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna