class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0,i=1,n= nums.size();
        
        for(int x:nums){
            if(n%i++ == 0) sum += x*x;
        }
        return sum;
    }
};
