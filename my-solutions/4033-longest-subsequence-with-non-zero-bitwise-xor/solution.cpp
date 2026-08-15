class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size(),resultXOR = 0;bool isAllzero = true;
        for(auto value :nums){
             resultXOR ^= value;
             if(value!=0) isAllzero = false;
        }
        if(isAllzero) return 0; 
    return resultXOR == 0 ?n-1:n;
    }
};
