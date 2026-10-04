class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* s = head;
        ListNode* f = head;

        while(f!=NULL && f->next!=NULL){
            s = s->next;
            f = f->next->next;
        }

        ListNode* prev = NULL;
        ListNode* curr = s;

        while (curr != NULL) {
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }

        ListNode* first = head;
        ListNode* second = prev;

        while (second != NULL) {
            if (first->val != second->val)
                return false;

            first = first->next;
            second = second->next;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna