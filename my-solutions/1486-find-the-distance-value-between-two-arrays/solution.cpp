class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count = 0;

        for(int x:arr1){
            int s=0,e=arr2.size()-1;
            bool check = true;

            while(s<=e){
                int mid = s+(e-s)/2;

                if(arr2[mid]<=x+d && arr2[mid]>=x-d){
                    check = false;
                    break;
                }
                else if(arr2[mid]<x-d){
                    s = mid +1;
                }
                else {
                    e = mid-1;
                }
            }
            if(check) count++;
        }
        return count;
    }
};
