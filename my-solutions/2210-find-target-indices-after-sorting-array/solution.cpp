class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int cnt1 =0,cnt2 =0;
        
        for(int x:nums){
            if(x<target) cnt1++;
            else if(x==target) cnt2++;
        }
        
        vector<int> idx;
        
        for(int i=cnt1;i<cnt1 + cnt2;i++){
             idx.push_back(i);
        }
        return idx;
    }
};
