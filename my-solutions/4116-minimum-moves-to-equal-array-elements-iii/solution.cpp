class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves=0;
        int maxi= *max_element(nums.begin(),nums.end());
        for(int x:nums) moves += maxi - x;
        return moves;
        
    }
};
