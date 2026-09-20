class Solution {
public:
    void combSum(int i, vector<int>& ds, int n, vector<vector<int>>& ans,vector<int>& candidates,int target){

        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(i==n || target<0){
            return;
        }
        

        ds.push_back(candidates[i]);
        combSum(i,ds,n,ans,candidates,target-candidates[i]);
        ds.pop_back();
        combSum(i+1,ds,n,ans,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> ds;
        combSum(0,ds,n,ans,candidates,target);
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna