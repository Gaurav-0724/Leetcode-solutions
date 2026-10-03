class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int len =0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            len++;
        }
        k = k%len;
        if(k==0) return head;
        temp = head;
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;

        for(int i=1;i<=len;i++){
            if(i==len-k) a = temp;
            if(i==len-k+1) b = temp;
            if(i==len) c = temp;
            temp = temp->next;
        }
        a->next = NULL;
        c->next = head;
        return b;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna