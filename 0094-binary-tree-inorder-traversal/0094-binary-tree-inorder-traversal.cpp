void inOrder(vector<int>& ans,TreeNode* root){
    if(root==NULL) return;
    inOrder(ans,root->left);
    ans.push_back(root->val);
    inOrder(ans,root->right);
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;
        inOrder(ans,root);
        return ans;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna