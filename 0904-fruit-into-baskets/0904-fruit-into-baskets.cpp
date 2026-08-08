class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n= fruits.size();

        int l=0,r=0,maxlen=0;
        map<int,int> mp;

        while(r<n){
            mp[fruits[r]]++;
            if(mp.size()>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                l++;
            }
            if(mp.size()<=2){
                maxlen = max(r-l+1,maxlen);
                
            }
            r++;
        }
        return maxlen;





        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna