class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int i=0,j=1;
        int n = nums.size();
        int ans = INT_MAX;

        while(i<=n-2 && j<= n-1){
            string x1 = to_string(nums[i]),y1=to_string(nums[j]);
            int num = stoi(x1 + y1);
            ans = min(ans,num);

        i+=2;j+=2;
        }
        return ans;
    }
};
