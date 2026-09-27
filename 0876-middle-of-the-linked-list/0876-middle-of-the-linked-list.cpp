class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* s = head;
        ListNode* f = head;

        while(f != NULL && f->next != NULL){
            s = s->next;
            f = f->next->next;
        }
        return s;
    }

    // ListNode* middleNode(ListNode* head) {
    //     int len = 0;
    //     ListNode* temp = head;

    //     while(temp!=NULL){
    //         temp = temp->next;
    //         len++;
    //     }
    //     temp = head;
    //     for(int i = 1; i <= len/2; i++){
    //         temp = temp->next;
    //     }
    //     return temp;
    // }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna