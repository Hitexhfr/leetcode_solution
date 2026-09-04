class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector <int> maxi(n);
        vector <int> mini(n);
        
        for(int i=0;i<n;i++){
            maxi[i] = *max_element(nums.begin(),nums.begin()+i);
  }
  for(int i=0;i<n;i++){
            mini[i] = *min_element(nums.begin()+i,nums.end());
  }
  for(int i =0;i<n;i++){
      int curr = maxi[i]-mini[i];
      if(curr<=k){
          return i;
      }
  }
   return -1;
        
    }
};
