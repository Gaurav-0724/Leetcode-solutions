class Solution {
  public:
    int maxSumIS(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> msis = arr;
        int result=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i]>arr[j]){
                    msis[i] = max(msis[i],arr[i]+msis[j]);
                }
                
            }
            result = max(result,msis[i]);
        }
        
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna