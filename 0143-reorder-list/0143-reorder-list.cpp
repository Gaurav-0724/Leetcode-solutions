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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }


        ListNode* a = head;

        ListNode* b = slow->next;
        slow->next = NULL;

        b = reverse(b);

        while(a != NULL && b != NULL ){
            ListNode* fwda = a->next;
            ListNode* fwdb = b->next;
            a->next = b;
            b->next = fwda;

            a = fwda;
            b = fwdb;
        }
       


    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna