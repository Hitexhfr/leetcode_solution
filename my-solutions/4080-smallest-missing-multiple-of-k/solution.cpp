class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector <int> multiples(101);
        sort(nums.begin(),nums.end());
        for(int i = 0;i<101;i++) multiples[i]=(k*(i+1));
        int j = 0;
        for(auto value : nums){
            if(multiples[j]==value){
                multiples[j++]=-1;
            }
        }
        for(int i= 0;i<101;i++) {
           if(multiples[i] !=-1){
              return multiples[i];
           }   
        } 
      return -1;        
    }
};
