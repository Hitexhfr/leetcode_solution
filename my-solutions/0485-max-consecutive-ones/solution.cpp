class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0,curr= 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                curr++;
                maxOnes = max(curr,maxOnes);
            }
            else{
                curr= 0;
            }
        }
        return maxOnes;
    }
};
