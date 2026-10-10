class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        long long maxi = LLONG_MIN;
        vector<int> ans = {-1,-1};

        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                if(i!=j && nums[i]+nums[j]==target && nums[i]>nums[j]){
                    long long p = 1LL *nums[i]*nums[j];
                     if(p>maxi){
                         maxi = p;
                         ans = {i,j};
                     }
                }
            }
        }
        return ans;
    }
};
