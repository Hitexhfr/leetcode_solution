class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;

        int left = 0,n= nums.size();

        for(int right =0;right<n;right++){
            if(nums[right]<minK || nums[right]>maxK){
                left = right +1;
            }
            ans += right - left +1;
        }
     return ans;
    }
};
