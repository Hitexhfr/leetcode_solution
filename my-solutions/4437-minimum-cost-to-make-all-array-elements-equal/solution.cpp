class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();
        long long ans = LLONG_MAX;

        int i = 0;

        while(i<n){
            int j = i;

            while(j<n && nums[j]==nums[i]) j++;

            long long len = j - i;
            if(j>1 && i<n-1){
            long long cost = (n-len)*1LL*nums[i];
            ans = min(ans,cost);
            }
          i = j;
        }
        return ans;
    }
};
