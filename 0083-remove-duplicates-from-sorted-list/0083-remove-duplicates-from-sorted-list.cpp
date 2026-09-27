class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* i = head;
        ListNode* j = head;

        while(j!= NULL){
            if(i->val == j->val){
                j = j->next;
            }
            else{
                i->next = j;
                i=j;
            }
        }
        if(i!=NULL) i->next = j;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna