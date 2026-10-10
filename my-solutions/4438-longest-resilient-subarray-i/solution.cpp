class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0;

        for(int i= 0;i<n;i++){
            long long sum = 0;
            int rem = nums[i]%k;
            bool check = true;

            for(int j=i;j<n;j++){
                sum += nums[j];
                if(nums[j]%k!=rem) check = false;

                if(check && sum%k == rem) ans = max(ans,j -i+1);
            }
        }
        return ans;
    }
};
