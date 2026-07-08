class Solution {
public:

    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int,int> > bits;
        for(int i=0;i<n;i++){
            bits.push_back({__builtin_popcount(arr[i]),arr[i]});

        }
        sort(bits.begin(),bits.end());
        vector<int>ans;
        for(int i = 0 ; i<n ; i++){
            ans.push_back(bits[i].second);
        }
        return ans;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna