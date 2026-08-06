class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int hash[256];
        int n= s.size();

        for(int i=0;i<256;i++){
            hash[i]=-1;
        }
        int l=0, r=0, maxlen=0;

        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l = hash[s[r]]+1;
                }
                
            }
            int len = r-l+1;
            maxlen = max(maxlen,len);
            hash[s[r]]=r;
            r++;
        }
        return maxlen;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna