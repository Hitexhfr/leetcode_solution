class Solution {
public:
    bool judgeSquareSum(int c) {
        int s = 0, e = sqrt(c);
        while (s <= e) {
            long long plaus = 1LL * (s * s) + 1LL * (e * e);
            if (plaus == c) {
                return true;
            } else if (plaus > c) {
                e--;
            } else {
                s++;
            }
        }
        return false;
    }
};
