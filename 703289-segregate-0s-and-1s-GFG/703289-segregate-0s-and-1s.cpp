class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n= arr.size();
        int i=0,j=n-1;
        
        while(i<=j){
            if(arr[i]==1){
                if(arr[j]==0){
                    swap(arr[i],arr[j]);
                    i++,j--;
                }
                else j--;
            }
            else{
                i++;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna