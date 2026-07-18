class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(),closetSum = nums[0] + nums[1] + nums[2];
        sort(nums.begin(),nums.end());

        for(int k = 0;k<n-2;k++){
            int i = k + 1,j = n-1;

            while(i<j){
                int sum = nums[k]+nums[i]+nums[j];

                if(abs(target-sum)<abs(target-closetSum)){
                    closetSum = sum;
                }
                if(sum<target){
                    i++;
                }
                else{
                    j--;
                }
            }
        }
    return closetSum;            
    }
};
