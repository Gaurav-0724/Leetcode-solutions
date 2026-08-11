class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> ans(n,vector<int>(m));

        for(int i = 0;i < n; i++){
            for(int j = 0;j <m ;j++){
                ans[i][j] = matrix[j][i];


            }
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna