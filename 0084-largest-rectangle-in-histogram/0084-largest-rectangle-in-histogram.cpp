class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        int maxArea = 0;

        for(int i = 0;i < n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                int ele = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty() ? -1 : st.top();

                maxArea = max(arr[ele] * (nse-pse-1) , maxArea);
            }
            st.push(i);  
        }

        while(!st.empty()){
                int ele = st.top();
                st.pop();
                int nse = n;
                int pse = st.empty() ? -1 : st.top();

                maxArea = max(arr[ele] * (nse-pse-1) , maxArea);
        }
        
        return maxArea;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna