class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int count = 0,n= nums.size();
        if(n==1) return 1;
        for(int i = 0;i<nums.size();i++){
            if(i==0){
                if(nums[i]>=nums[i+1])count++;
            }
            else if(i==n-1){
                if(nums[i]>=nums[i-1]) count++;
            } else{
                int avg = (nums[i-1]+nums[i+1]);
                if(2*nums[i]>=avg) count++;
            }
        }
       return count;
    }
};
