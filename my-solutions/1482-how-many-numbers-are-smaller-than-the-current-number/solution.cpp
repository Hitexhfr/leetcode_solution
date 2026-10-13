class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> freq(101,0);
        for(int x:nums) freq[x]++;

        for(int i = 0;i<nums.size();i++){
            int count = 0,j=nums[i]-1;
            while(j>=0){
                if(freq[j]>0){
                    count += freq[j];
                }
                j--;
            }
            nums[i] = count;
        }
        return nums;
    }
};
