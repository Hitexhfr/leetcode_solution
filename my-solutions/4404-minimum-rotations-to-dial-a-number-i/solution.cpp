class Solution {
public:
    int minRotations(string s) {
        int ops =0,prev =0;
        for(int i=0;i<s.length();i++){
            int x = s[i] - '0';
            int d = abs(x-prev);
            ops += min(d,10-d);
            prev = x;
        }
        return ops;
    }
};
