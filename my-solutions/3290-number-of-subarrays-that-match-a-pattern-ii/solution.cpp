class Solution {
public:
    void computeLPS(vector<int>& pattern,vector<int>& lps){
        int m = pattern.size(),length=0;

        int i=1;

        while(i<m){
           if(pattern[i]==pattern[length]){
                length++;
                lps[i] = length;
                i++;
            }
            else{
                if(length!=0){
                    length = lps[length-1];
                }
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n = nums.size(),m=pattern.size();

        vector<int> nums2;

        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]>=1) nums2.push_back(1);
            else if(nums[i]==nums[i-1])nums2.push_back(0);
            else nums2.push_back(-1);
        }

        vector<int> lps(m,0);
        computeLPS(pattern,lps);

        int i = 0,j=0;

        int ans = 0;

        while(i<nums2.size()){
            if(nums2[i]==pattern[j]){
                i++;j++;
            }
            if(j==pattern.size()){
                ans++;
                j= lps[j-1];
            }
            else if(i<nums2.size() && pattern[j]!=nums2[i]){
                if(j!=0){
                    j = lps[j-1];
                }
                else {
                    i++;
                } 
            }
        }
      return ans;
    }
};
