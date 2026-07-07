class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count=0;
        while(a!=0 || b!=0 || c!=0){
           int abit= a&1, bbit= b&1, cbit = c&1;
           if(cbit==1){
            if(abit==0 && bbit==0) count+=1;
            }
            else{
                count+= abit+bbit;
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return count;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna