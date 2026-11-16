class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int best = nums[0]; //best i that i can take;

        for(int j=k;j<n;j++){
            best = max(best,nums[j-k]);
            ans = max(ans,best + nums[j]);
        }
      return ans;
    }
};
