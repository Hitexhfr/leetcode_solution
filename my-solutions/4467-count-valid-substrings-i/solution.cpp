class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans = s.size()==1 ? 1 :3;
        long long curr =0;

        for(int i=2;i<s.size();i++){
            if(s[i-2]=='a' && s[i-1]=='b' && s[i]=='c') curr = i-1;
          ans += i - curr + 1;  
        }
      return ans;
    }
};
