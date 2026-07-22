class Solution {
public:
    int numSquares(int n) {
        if(n<=3) return n;

        vector<int> minimumPerfectSquare(n+1,INT_MAX);
        
        minimumPerfectSquare[0] = 0;
        minimumPerfectSquare[1] = 1;
        minimumPerfectSquare[2] = 2;
        minimumPerfectSquare[3] = 3;

        for(int i=4;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                minimumPerfectSquare[i] = min(minimumPerfectSquare[i],1+minimumPerfectSquare[i-j*j]);
            }
        }
        return minimumPerfectSquare[n];


        
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna