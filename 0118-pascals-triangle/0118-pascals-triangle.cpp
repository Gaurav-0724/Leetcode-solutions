class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for(int i=1;i<=numRows;i++){

            ans.push_back(vector<int>(i,1));
        }

        if(numRows<3){
            return ans;
        }

        for(int j=2;j<numRows;j++){
            for(int k=1;k<ans[j].size()-1;k++){
                ans[j][k] = ans[j-1][k-1] + ans[j-1][k];
            }
        } 
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna