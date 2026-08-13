class Solution {
public:
    int numberOfSubstrings(string s) {

        int n = s.size();
        int lastseen[3] = {-1,-1,-1};
        int count=0;

        for(int i=0;i<n;i++){
            lastseen[s[i]-'a'] = i;
            if(lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1){
                count = count +(1+ min(lastseen[0],min(lastseen[1],lastseen[2])));
            }
        }
        return count;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna