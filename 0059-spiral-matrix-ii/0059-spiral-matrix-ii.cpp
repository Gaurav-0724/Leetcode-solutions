class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

       

        vector<vector<int>> v(n,vector<int>(n));
        
        int top =0, bottom = n-1;
        int left= 0, right = n-1;
        int t =1;

        while(top<=bottom && left<= right){

            for(int i=left;i<=right;i++){
                v[top][i] = t;
                t++;
            }
            top++;
            for(int j=top;j<=bottom;j++){
                v[j][right] = t;
                t++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    v[bottom][i]= t;
                    t++;
                }
                bottom--;
            }

            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    v[j][left] = t;
                    t++;
                }
                left++;

            }

        }
        
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna