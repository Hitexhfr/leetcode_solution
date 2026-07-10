class Solution {
public:
    bool binarySearch(vector<int>& nums1,int target){
        int s = 0, e = nums1.size() -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums1[mid]==target){
                return true;
            }
            else if(nums1[mid]>target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
           unordered_set<int> st1;
           
           sort(nums1.begin(),nums1.end());
           for(auto num:nums2){
             if(binarySearch(nums1,num)){
                st1.insert(num);
                }
           } 
           vector<int> result(st1.begin(),st1.end());
           return result;
     }
};
