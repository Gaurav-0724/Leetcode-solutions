class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* dummy = new ListNode(-1);
        ListNode* k = dummy;

        while(i!=NULL && j!=NULL){
            if(i->val < j->val){
                k->next = i;
                k = k->next;
                i = i->next;
            }
            else{
                k->next = j;
                k = k->next;
                j = j->next;
                
            }
        }
        if(j==NULL){
            k->next = i;
        }
        if(i==NULL){
            k->next = j;
        }
        return dummy->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* s = head;
        ListNode* f = head;

        while(f->next!=NULL && f->next->next!=NULL){
            s = s->next;
            f = f->next->next;
        }
        ListNode* head2 = s->next;
        s->next = NULL; 

        head = sortList(head);
        head2 = sortList(head2);

        return mergeTwoLists(head,head2);



    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna