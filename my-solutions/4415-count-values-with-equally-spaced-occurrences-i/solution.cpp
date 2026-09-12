class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector <int> freq(101,0);
        for(int x:nums) freq[x]++;
        
        int ans = 0,n= nums.size();
        for(int i=0;i<n;i++){
            if(freq[nums[i]]!=3) continue;
            int curr = nums[i];
            int first= i, second=-1, third=-1;
            for(int j = i+1;j<n;j++){
                if(nums[j]==curr){
                    if(second == -1) second = j;
                    else third = j;
                }
            }
            if(second-first == third-second) ans++;
        }
       return ans;
    }
};
