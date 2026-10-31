void postOrder(vector<int>& ans,TreeNode* root){
    if(root==NULL) return;
    postOrder(ans,root->left);
    postOrder(ans,root->right);
    ans.push_back(root->val);
}
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postOrder(ans,root);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna