class Solution {
  public:
    int findways(int eggs,int moves){
        if(eggs==0 || moves==0){
            return 0;
        }
        if(eggs==1){
            return moves;
        }
        
        
        
        return 1+ findways(eggs-1,moves-1) + findways(eggs,moves-1);
    }
    int eggDrop(int n, int k) {
        // code here
        int moves = 0;
        while(findways(n,moves)<k){
            moves++;
        }
        return moves;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna