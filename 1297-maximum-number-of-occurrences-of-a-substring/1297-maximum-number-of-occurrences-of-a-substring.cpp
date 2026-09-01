class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        
         unordered_map<string, int> count;
        unordered_map<char, int> freq;

        int n = s.size();
        int distinct = 0;
        int ans = 0;

        int i = 0;

        for (int j = 0; j < n; j++) {

            
            freq[s[j]]++;

            if (freq[s[j]] == 1) {
                distinct++;
            }

            
            if (j - i + 1 > minSize) {

                freq[s[i]]--;

                if (freq[s[i]] == 0) {
                    distinct--;
                }

                i++;
            }

           
            if (j - i + 1 == minSize && distinct <= maxLetters) {

                string sub = s.substr(i, minSize);

                count[sub]++;

                ans = max(ans, count[sub]);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna