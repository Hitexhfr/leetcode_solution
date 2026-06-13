class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> c;
        for(auto value:nums1){
            c.push_back(value);
        }
        for(auto value:nums2){
            c.push_back(value);
        }
        sort(c.begin(), c.end());
        int n = c.size();
        int mid1 = n/2 - 1;
        int mid2 = mid1 + 1;

        

        float median;       

        if(n%2==0)
            median = (c[mid1] + c[mid2])/2.0;
        else 
            median = c[n/2] ;
    return median;
    }
};
