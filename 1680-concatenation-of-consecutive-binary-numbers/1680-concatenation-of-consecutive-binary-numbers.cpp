class Solution {
public:
    int M = 1e9+ 7;
    int concatenatedBinary(int n) {
        long long result=0;
        int digit=0;

        for(int i=1;i<=n;i++){
            if((i & (i-1))==0) digit++;

            result = ((result<<digit)%M +i)%M;

        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna