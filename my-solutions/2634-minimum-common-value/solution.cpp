class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int x:nums1){
            int s =0,e= nums2.size()-1;

            while(s<=e){
                int mid = s+(e-s)/2;
                
                if(nums2[mid]==x) {
                    return x;
                }
                else if(nums2[mid]>x){
                    e = mid -1;
                }
                else{
                    s = mid +1;
                }
            } 
        }
        return -1;
    }
};
