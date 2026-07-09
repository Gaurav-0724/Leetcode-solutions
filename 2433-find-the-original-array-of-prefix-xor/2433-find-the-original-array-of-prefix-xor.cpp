class Solution {
public:
    int find(int x, int y){
        int digit=0;
        int origi =0;
        for(int i=0;i<32;i++){
            if((y&1)==0){
                if((x&1)==1) digit = (x&1);
                
            }
            else{
                digit = (x^1);
            }
            if(digit==1){
                origi = (origi|digit<<i);
            }
            digit=0;
            x>>=1;
            y>>=1;
        }
        return origi;


    }
    vector<int> findArray(vector<int>& pref) {
        int n= pref.size();
        vector<int> arr(n);
        arr[0] = pref[0];
        // for(int i=1;i<n;i++){
        //     int t = find(pref[i-1],pref[i]);
        //     if((pref[i-1]^t)==pref[i]){
        //         arr[i] = t;
        //     }
        // }
        for(int i=1;i<n;i++){
            arr[i] = pref[i-1]^pref[i];
        }
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna