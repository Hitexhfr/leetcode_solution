class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();int maxi=-1,curr_maxi=0;
        for(int i = n-1;i>=0;i--){
           curr_maxi = max(arr[i],curr_maxi);
           arr[i]= maxi;maxi = curr_maxi;
        }
      return arr;
    }
};
