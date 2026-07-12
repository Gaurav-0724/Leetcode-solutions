class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> m;

        for(int i=0;i<n;i++){
            m[s[i]]++;

        }
        for(int i=0;i<n;i++){
            if(m.find(t[i]) !=m.end()){
                m[t[i]]--;
            }
            if(m[t[i]]==0) m.erase(t[i]);
        }
        if(m.size()==0) return true;
        return false;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna