class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        int digit = 0;
        int rev = 0;
        int temp = x;

        while (x > rev) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }

        if (rev == x || rev/10 ==x)
           return true;
        else 
           return false;
    }
};
