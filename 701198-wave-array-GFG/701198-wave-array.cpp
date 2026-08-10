class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int n = arr.size();
        int i=0,j=1;
        while(i<n & j<n){
            swap(arr[i],arr[j]);
            i+=2;
            j+=2;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna