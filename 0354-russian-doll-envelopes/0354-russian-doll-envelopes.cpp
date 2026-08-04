class Solution {
public:
    static bool comp(vector<int>& first,vector<int>& second){
        if(first[0]==second[0]){
            return first[1]>second[1];
        }
        return first[0]<second[0];
    }

    int lowerbound(int k,vector<int>& temp){

        int lo=0;
        int hi = temp.size()-1;
        int ans= hi+1;

        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(temp[mid]>=k){
                ans =mid;
                hi = mid-1;
                
            }
            else{
                lo =mid+1;
            }
        }

        return ans;
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {

        int n =envelopes.size();

        sort(envelopes.begin(),envelopes.end(),comp);
        vector<int> temp(1,envelopes[0][1]);

        for(int i=1;i<n;i++){

            int index = lowerbound(envelopes[i][1],temp);

            if(index==temp.size()){
                temp.push_back(envelopes[i][1]);
            }

            else{
                temp[index] = envelopes[i][1];
            }


        }
        return temp.size();

        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna