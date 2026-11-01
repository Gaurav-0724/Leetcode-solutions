class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr!=NULL){
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;

        ListNode* temp = head;

        while(temp!=NULL){
            while(!st.empty() && (st.top())->val<(temp->val)){
                st.pop();
            }
            st.push(temp);
            temp = temp->next;
        }
        ListNode* dummy = new ListNode(-1);
        temp = dummy;
        while(!st.empty()){
            ListNode* top = st.top();
            st.pop();
            temp->next = top;
            temp = top;

        }
        temp->next = NULL;
        return reverse(dummy->next);

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna