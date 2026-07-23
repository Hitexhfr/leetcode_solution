class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return n;
        int bit_length = 32 - __builtin_clz(n);

        return pow(2,bit_length);
    }
};
