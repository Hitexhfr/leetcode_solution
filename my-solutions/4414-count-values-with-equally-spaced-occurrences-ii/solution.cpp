class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>> mp;

        for(int i = 0;i<nums.size();i++) mp[nums[i]].push_back(i);
      
        int ans = 0;

        for(auto i:mp){
            vector<int> a = i.second;
            int n = a.size();
            if(n<3) continue;

            int spacing = a[1] - a[0];

            bool flag = true;

            for(int j = 1;j<n-1;j++){
                if(a[j+1]-a[j]!=spacing){
                   flag = false;
                   break;
                }
            }
            if(flag) ans++;
        }
    return ans;
    }
};
