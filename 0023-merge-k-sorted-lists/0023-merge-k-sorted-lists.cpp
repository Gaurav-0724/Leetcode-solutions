class Solution {
public:
    ListNode* merge(ListNode* list1, ListNode* list2) {
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* a = lists[lists.size()-1];
            lists.pop_back();
            ListNode* b = lists[lists.size()-1];
            lists.pop_back();
            ListNode* c = merge(a,b);
            lists.push_back(c); 
        }

        return lists[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna