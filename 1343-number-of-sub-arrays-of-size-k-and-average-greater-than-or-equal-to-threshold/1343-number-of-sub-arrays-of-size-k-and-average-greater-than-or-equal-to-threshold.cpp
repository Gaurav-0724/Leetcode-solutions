class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int n = arr.size();

        int sum = 0;
        
        for(int i = 0; i < k; i++){
            sum += arr[i];

        }
        int count =0;
        if(sum/k>= threshold){
            count+=1;
        }

        for(int i = k; i < n; i++){
            sum += arr[i];
            sum -= arr[i-k];

            if(sum/k>=threshold){
                count++;
            }
        }

        return count;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna