class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(-1);
        ListNode* dummy2 = new ListNode(-1);
        ListNode* t1 = dummy1;
        ListNode* t2 = dummy2;
        ListNode* t = head;

        while(t!=NULL){
            if(t->val<x){
                t1->next = t;
                t1 = t;
                t = t->next;
            }
            else{
                t2->next = t;
                t2 = t;
                t = t->next;
            }
        }
        t2->next = NULL;
        t1->next = dummy2->next;
        return dummy1->next;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna