class Solution {
public:
    int len(ListNode* head){
      int n = 0;

      ListNode* temp = head;
      while(temp!=NULL){
        n++;
        temp = temp->next;
      }
      return n;
    }

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

    int pairSum(ListNode* head) {

        int n = len(head);

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }


        ListNode* a = head;
        ListNode* b = slow->next;

        b = reverse(b);

        int sum =0;
        
        for(int i=1 ; i<=n/2 ; i++){
            if((a->val+b->val)>sum){
                sum = a->val+b->val;
            }
            a = a->next;
            b = b->next;
        }
        return sum;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna