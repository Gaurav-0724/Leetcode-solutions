class Solution {
public:
    bool isvowel(char c){

        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

    int maxVowels(string s, int k) {

        int n = s.size();

        
        int count = 0;

        for(int i = 0; i < k; i++){
            if(isvowel(s[i])){
                count++;
            }
        }

        int maxlen =count;


        for(int j = k; j < n; j++){

            if(isvowel(s[j-k])){
                count--;
            }
            
            if(isvowel(s[j])){
                count++;
            }

            maxlen = max(maxlen,count);
        }

        return maxlen;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna