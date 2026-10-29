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
        int i =0;

        for(int i = 0;i<nums1.size();i++){
            int value = nge(nums1[i],nums2);
            nums1[i] = value;
        }
        return nums1;
    }
};
