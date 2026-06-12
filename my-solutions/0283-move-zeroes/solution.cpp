class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int> temp; 

        for(int i =0;i<nums.size();i++) {
            if(nums[i]==0){
                count++;
            }
            else{
                temp.push_back(nums[i]);
            }
        }

        temp.insert(temp.end(), count, 0);   
        nums = temp;
        for(auto value:nums){
            cout<<value;
        }
        
    }
};
