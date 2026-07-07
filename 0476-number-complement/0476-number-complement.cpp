class Solution {
public:
    int findComplement(int num) {
        int temp = num;
        int no = 0;
        while(temp>0){
            no = ((no<<=1)|1);
            temp>>=1;
        }
        return num ^ no;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna