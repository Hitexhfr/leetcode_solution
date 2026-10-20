class Solution {
public:
    void computeLPS(string pattern,vector<int> &lps){
        int m = pattern.length(),length=0;

        int i = 1;

        while(i<m){
            if(pattern[i]==pattern[length]){
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
    string longestPrefix(string s) {
        int m = s.length();
        vector <int> lps(m,0);

        computeLPS(s,lps);

        return s.substr(0,lps[m-1]);
    }
};
