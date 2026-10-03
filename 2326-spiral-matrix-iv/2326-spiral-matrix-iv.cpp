class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int> (n,-1));
        int top =0, bottom = m-1;
        int left= 0, right = n-1;
        ListNode* temp = head;

        while(temp!=NULL && top<=bottom && left<= right){

            for(int i=left;i<=right;i++){
                if(temp==NULL) break;
                ans[top][i] = temp->val;
                temp = temp->next;
            }
            top++;
            for(int j=top;j<=bottom;j++){
                if(temp==NULL) break;
                ans[j][right] = temp->val;
                temp = temp->next;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    if(temp==NULL) break;
                    ans[bottom][i] = temp->val;
                    temp = temp->next;
                }
                bottom--;
            }

            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    if(temp==NULL) break;
                    ans[j][left] = temp->val;
                    temp = temp->next;
                }
                left++;

            }
            


        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna