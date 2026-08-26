class Solution {
public:
    bool isGoodSub(string& s,int i, int j){

       

        for(int k=i;k<=j-1;k++){
            for(int l =k+1;l<=j;l++){
                if(s[k]==s[l]) return false;
            }
            
           

        }
        return true;
    }
    int countGoodSubstrings(string s) {
        
        int n = s.size();

        int count = 0;

        for(int i=0;i<n-2;i++){
            int j =i+2;
            if(isGoodSub(s,i,j)){
                count+=1;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna