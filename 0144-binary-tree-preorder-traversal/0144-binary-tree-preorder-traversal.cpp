void preOrder(vector<int>& ans,TreeNode* root){
    if(root==NULL) return;
    ans.push_back(root->val);
    preOrder(ans,root->left);
    preOrder(ans,root->right);
}
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preOrder(ans,root);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna