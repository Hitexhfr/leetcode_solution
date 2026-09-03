class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd_cnt = 0, even_cnt = 0, n = nums1.size();
        for (auto value : nums1) {
            if (value % 2 == 0)
                even_cnt++;
            else
                odd_cnt++;
        }
        if (odd_cnt == n || even_cnt == n)
            return true;

        int mini = *min_element(nums1.begin(),nums1.end());
        if(mini%2==0) return false;
        
        
        return true;
    }
};
