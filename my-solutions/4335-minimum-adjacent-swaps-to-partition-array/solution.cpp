class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        const int MOD = 1e9 + 7;
        long long cnt1 = 0,cnt2 = 0,ans = 0;

        for(int value:nums){
            if(value<a){
                ans += cnt1 + cnt2;
            }
            else if(value<=b){
                ans+= cnt2;
                cnt1++;
            }
            else{
                cnt2++;
            }
            ans %= MOD;
        }
        return ans;
        
    }
};
