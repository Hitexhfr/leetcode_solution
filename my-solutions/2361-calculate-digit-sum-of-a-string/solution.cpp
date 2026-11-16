class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string curr;
            int n = s.length();
            for(int i=0;i<s.size();i=i+k){
                int value = 0;
                for(int j=i;j<min(i+k,n);j++){
                   value += s[j] - '0';
                }
                curr += to_string(value);
            }
            s = curr;
        }
      return s;
    }
};
