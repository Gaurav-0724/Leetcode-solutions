class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);

            }
        }

        for(int k=0;k<n;k++){
            reverse(matrix[k].begin(),matrix[k].end());
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna