class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        if(head->next->next==NULL){
            head->next = NULL;
            return head;
        }
        ListNode* s = head;
        ListNode* f = head;

        while(f != NULL && f->next != NULL){
            s = s->next;
            f = f->next->next;
        }
        s->val = s->next->val;
        s->next = s->next->next;

        return head;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna