class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        int lsum=0,rsum=0, maxsum=0;

        for(int i=0;i<k;i++){
            lsum+= cardPoints[i];
        }
        maxsum=lsum;

        int rindex =n-1;
        for(int i=k-1;i>=0;i--){
            lsum-= cardPoints[i];
            rsum+= cardPoints[rindex];

            maxsum = max(maxsum,lsum+rsum);
            rindex--;
        }

        return maxsum;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna