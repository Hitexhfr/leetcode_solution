class Solution {
public:
    int findLHS(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int i = 0,n=nums.size(),maxi=0;int j = n-1;
       while(i<n && j>=i){
          if(nums[j]-nums[i]>1){
            j--;
          }
          else if(nums[j]-nums[i]==1){
            maxi = max(maxi,j+1-i);
            i++;j=n-1;
          }
          else{
            i++;j=n-1;
          }
       }
       return maxi; 
    }
};
