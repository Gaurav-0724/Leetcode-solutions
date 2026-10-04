class Solution {
  public:
    Node* partition(Node* head, int x) {
        // code here
        Node* dummy1 = new Node(-1);
        Node* dummy2 = new Node(-1);
        Node* dummy3 = new Node(-1);
        Node* t1 = dummy1;
        Node* t2 = dummy2;
        Node* t3 = dummy3;
        Node* t = head;
        
        while(t!=NULL){
            Node* next = t->next;
            t->next = NULL;
            if(t->data<x){
                t1->next = t;
                
                t1 = t1->next;
            }
            else if(t->data>x){
                t2->next = t;
                
                t2 = t2->next;
            }
            else{
                t3->next = t;
                
                t3 = t3->next;
            }
            t = next;
        }
        t3->next = dummy2->next;


        t1->next = dummy3->next;

        
        if (dummy1->next != NULL)
            return dummy1->next;

        if (dummy3->next != NULL)
            return dummy3->next;

        return dummy2->next;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna