class Solution {
public:
    bool isPossible(vector<int>& nums, int n, int k, int sol) {
        int totalSum = 0;
        int count = 1;

        for (int i = 0; i < n; i++) {
            if (nums[i] > sol)
                return false;
            if (totalSum + nums[i] <= sol) {
                totalSum = totalSum + nums[i];
            } else {
                totalSum = nums[i];
                count++;
                if (count > k) {
                    return false;
                }
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = -1;

        if (k > n) {
            return -1;
        }

        int start = *max_element(nums.begin(), nums.end());
        int end = accumulate(nums.begin(), nums.end(), 0);

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (isPossible(nums, n, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};
