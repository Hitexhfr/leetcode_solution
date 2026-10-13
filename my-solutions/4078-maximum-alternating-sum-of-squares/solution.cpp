class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int &x:nums){
            x = abs(x);
        }
        sort(nums.begin(),nums.end(),std::greater<>());
         
        long long even = 0,odd=0;

        for(int i=0;i<(n+1)/2;i++){
            even += 1LL *nums[i]*nums[i];
        } 
        for(int i =(n+1)/2;i<n;i++){
            odd +=1LL *nums[i]*nums[i];
        }
    return even - odd;
    }
};
