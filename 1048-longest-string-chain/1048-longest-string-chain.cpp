class Solution {
public:

    static bool comp(string &word1,string &word2){

        return word1.size()<word2.size();
    }

    bool ispredecessor(string &word1,string &word2){

        if(word1.size()+1!= word2.size()){
            return 0;
        }

        int i =word1.size(), j=word2.size();
        while(i&&j){
            if(word1[i-1]==word2[j-1]){
            i--;
            j--;
        }
        else{
            j--;
        }

        }
        
        return i==0;

    }
    int longestStrChain(vector<string>& words) {
        int n = words.size();

        sort(words.begin(),words.end(),comp);
        int maxlen = 1;

        vector<int> lcs(n,1);
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(ispredecessor(words[j],words[i])){
                    lcs[i] =max(lcs[i],1+lcs[j]);
                }
            }
            maxlen =max(maxlen,lcs[i]);
        }
        return maxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna