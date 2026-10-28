class Solution {
public:
   int nge(int x,vector<int>& nums2){
         int idx =0,n=nums2.size();
         for(int i =0;i<n;i++){
             if(nums2[i]==x){
                  idx = i;
                  break;
             }
         }
          
        for(int i = idx +1;i<n;i++){
            if(nums2[i]>x){
                return nums2[i];
            }
        }
        return -1;
   }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector <int> res(n,-1);
        int i =0;

        for(int x:nums1){
            int value = nge(x,nums2);
            if(value !=-1){
                res[i] = value;
            }
            i++;
        }
        return res;
    }
};
