class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> mini(n);
        int minEl = INT_MAX;
        for(int i = n-1;i>=0;i--){
           minEl = min(minEl,nums[i]);
           mini[i]=minEl; 
        }
        
        int maxEl = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxEl = max(maxEl,nums[i]);
            int curr = maxEl - mini[i];
            if (curr <= k) {
                return i;
            }
        }
        return -1;
    }
};
