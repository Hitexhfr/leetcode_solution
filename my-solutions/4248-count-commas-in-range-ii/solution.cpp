class Solution {
public:
    using ll = long long;
    long long countCommas(long long n) {
        ll ans = 0;
        ll val = 1000;
        
        while(val<=n){
            ans += n-val+1;
            val *= 1000;
          }
          return ans;
    }
};
