class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();

        int sum = 0;
        int rsum = n-1;

        for(int i = 0; i < k; i++){

            sum += cardPoints[i];


        }

        int maxsum = sum;

        for(int i = k-1; i >=0 ; i--){
            sum -= cardPoints[i];
            sum += cardPoints[rsum];

            maxsum = max(maxsum,sum);
            rsum--;
        }

        return maxsum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna