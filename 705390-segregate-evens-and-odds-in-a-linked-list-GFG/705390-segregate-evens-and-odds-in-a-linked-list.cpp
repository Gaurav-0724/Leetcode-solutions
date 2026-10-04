class Solution {
  public:
    Node* divide(Node* head) {
        // code here
        Node* dummy1 = new Node(-1);
        Node* dummy2 = new Node(-1);
        Node* t1 = dummy1;
        Node* t2 = dummy2;
        Node* t = head;
        
        while(t!=0){
            if(t->data%2==0){
                t1->next = t;
                t = t->next;
                t1 = t1->next;
            }
            else{
                t2->next = t;
                t = t->next;
                t2 = t2->next;
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