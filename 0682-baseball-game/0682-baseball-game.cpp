class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        
        stack<int> st;

        for(string op : operations){
            if(op == "C") st.pop();
            else if(op == "D") st.push(2* st.top());
            else if(op == "+"){
                int x = st.top();
                st.pop();
                int y = x + st.top();
                st.push(x);
                st.push(y);
            }
            else{
                st.push(stoi(op));
            }
        }
        int sum = 0;
        while(st.size()>0){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna