/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int len = 0;
        Node* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        if(len < k) return -1;
        temp = head;
        int start = len-k+1;
        
        
        for(int i=1 ; i<=start-1; i++){
            temp = temp->next;
        }
        return temp->data;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna