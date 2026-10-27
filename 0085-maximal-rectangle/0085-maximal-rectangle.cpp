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

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>>pSum(m,vector<int>(n,0));
        int maxArea = 0;

        for(int j=0;j<n;j++){
            int sum = 0;
            for(int i=0;i<m;i++){
                if (matrix[i][j] == '1') {
                    sum++;
                } else {
                    sum = 0;
                }
                pSum[i][j] = sum;
            }
        }
        
        for(int i=0;i<m;i++){
            maxArea = max(maxArea,largestRectangleArea(pSum[i]));
        }

        return maxArea;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna