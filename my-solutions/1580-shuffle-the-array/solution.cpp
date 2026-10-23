class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> half1,half2,ans;
        
        for(int i=0;i<n;i++){
            half1.push_back(nums[i]);
        }

        for(int i=n;i<2*n;i++){
            half2.push_back(nums[i]);
        }
        
        int j =0,k=0;
        for(int i=0;i<2*n;i++){
           if(i%2==0) ans.push_back(half1[j++]);
           else ans.push_back(half2[k++]);
        }
        return ans;
    }
};
