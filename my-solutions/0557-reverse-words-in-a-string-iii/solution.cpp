class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        
        int start = 0,end = 0;
        while(start<n){
            while((s[end]!=' ') && end<n){
                end++;
            }
            int ending = end-1;
            while(start<ending){
                swap(s[start],s[ending]);
                start++;ending--;
            }
            start = end +1;end=end+1;
        }
      return s;
    }
};
