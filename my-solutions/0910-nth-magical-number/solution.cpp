class Solution {
public:
   /* instead if going like this n --> X
     we will go n <-- X
   */
    long long position(long long X,long long a, long long b){
        return X/a + X/b - X/lcm(a,b);
     }
    int nthMagicalNumber(int n, int a, int b) {
        int const MOD = 1e9+7;
        long long start = 1, end = 1LL*n* min(a, b);

        while(start<end){
            long long mid = start +(end-start)/2;
            long long pos = position(mid,a,b);

            if(pos<n) start = mid+1;
            else end = mid;
        }
        return start % MOD;
    }
};
