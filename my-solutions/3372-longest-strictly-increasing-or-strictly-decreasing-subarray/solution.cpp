class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc =1,dec =1;
        int max_inc =1,max_dec =1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                inc ++;
            } else{
                max_inc = max(max_inc,inc);
                inc =1;
            }
            if(nums[i]<nums[i-1]){
                dec ++;
            } else{
                max_dec = max(max_dec,dec);
                dec =1;
        }
    }
    max_inc = max(max_inc, inc);
    max_dec = max(max_dec, dec);
    return max(max_inc,max_dec);
    }
};
