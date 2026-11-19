class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
           vector <int> freq(1001,0);

           for(int x:nums1) freq[x]++;
           
           vector <int> result;
        
           for(int x:nums2){
               if(freq[x]){
                result.push_back(x);
                freq[x] = 0;
              }
           }
       return result;
     }
};
