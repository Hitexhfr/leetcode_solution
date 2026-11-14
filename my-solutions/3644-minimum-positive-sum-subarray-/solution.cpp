class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int sum = INT_MAX;
        
        for(int i=0;i<n;i++){
            int currSum = 0;
            
            for(int j=i;j<n && (j-i+1)<=r;j++){
                currSum += nums[j];
                
                if(j-i+1>=l && currSum>0){
                    sum = min(currSum,sum);
                }
            }
        }
        return sum== INT_MAX? -1 : sum;
    }
};
