class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int ans = 0, len = 0,rem = -1;

        for(int x:nums){
            int r = x%k;

            if(len==0 || r!=rem){
                len = 1;
                rem = r;
            } 
            else{
                len++;
            }
            if(1LL  *(len-1)*rem%k==0) ans = max(ans,len);
        }
        
        return ans;
    }
};
