class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long total = 0;
        const int MOD = 1e9 + 7;
        stack<int> st;

        vector<int> pse(n);
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while (!st.empty()) st.pop();

        vector<int> nse(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        for(int i=0;i<n;i++){
            int left = i - pse[i];
            int right = nse[i] -i;

            total = (total + (right*left*1ll*arr[i])%MOD) %MOD;
        }

        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna