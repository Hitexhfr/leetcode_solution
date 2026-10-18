class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int prev = nums[0],count=0;

        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev) {
                count++;
            }
        prev = nums[i]; 
        }
        return count;
    }
};
