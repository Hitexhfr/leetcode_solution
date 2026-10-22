class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
         int count_asc = 0,count_dsc=0;

         for(int i=1;i<n;i++){
            count_asc += nums[i] == (nums[i-1] + 1)%n ;
            count_dsc += nums[i] == (nums[i-1] - 1+n)%n ;
        }
        if(count_asc==n-1 && nums[0]==0) return 0;

        if(count_asc == n-1){
            int leftRot = n - nums[0];
            int rightRot = 1 + (nums.back() + 1) + 1;
            return min(leftRot,rightRot);
        }
        if(count_dsc == n-1){
            int leftRot = n-nums.back() + 1;
            int rightRot = (nums[0] +1)%n +1;

            return min(leftRot,rightRot);
        }
        return -1;
    }

};
