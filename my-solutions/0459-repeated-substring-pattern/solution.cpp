class Solution {
public:
    void computeLPS(string &s,vector <int> &lps){
        int m = s.length(),length=0;

        int i=1;

        while(i<m){
            if(s[i]==s[length]){
                length++;
                lps[i] = length;
                i++;
            }
            else{
                if(length!=0){
                    length = lps[length-1];
                }
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        vector <int> lps(n,0);

        computeLPS(s,lps);
        
        int period = n - lps[n-1];
        if (n% period == 0 && (n / period) > 1) {
            return true;
        }
        return false;
    }
};
