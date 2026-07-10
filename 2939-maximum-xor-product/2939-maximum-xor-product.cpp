class Solution {
public:
    int M = 1e9+7;
    typedef long long ll;
    int maximumXorProduct(long long a, long long b, int n) {

        ll xXora = 0;
        ll xXorb = 0;
        for(ll i=49;i>=n;i--){
            bool a_ith_bit = ((a>>i)&1) > 0;
            bool b_ith_bit = ((b>>i)&1) > 0;

            if(a_ith_bit == true){
                xXora = xXora ^(1ll<<i);
            }
            if(b_ith_bit == true){
                xXorb = xXorb ^(1ll<<i);
            }
        }

        for(ll i=n-1;i>=0;i--){
            bool a_ith_bit = ((a>>i)&1) > 0;
            bool b_ith_bit = ((b>>i)&1) > 0;

            if(a_ith_bit == b_ith_bit){
                xXora = xXora ^(1ll<<i);
                xXorb = xXorb ^(1ll<<i);
                
            }
            else{
                if(xXora>xXorb){
                    xXorb = xXorb ^(1ll<<i);
                }
                else{
                    xXora = xXora ^(1ll<<i);
                }
            }
        }

        xXora = xXora%M;
        xXorb = xXorb%M;

        return (xXora * xXorb)%M;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna