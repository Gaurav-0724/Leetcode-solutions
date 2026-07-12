class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        unordered_set<string> s;
        int count=0;
        for(int i=0;i<n;i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev)==s.end()){
                s.insert(words[i]);
            }
            else{
                count++;
            }
        }
        
        // for(int i=0;i<n;i++){
        //     string rev = words[i];
        //     reverse(rev.begin(),rev.end());

        //     if(rev==words[i]) continue;
        //     if(s.find(rev)!=s.end()){
        //         count++;
        //         s.erase(words[i]);
        //     }
        // }
        return count;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna