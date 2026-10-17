class Solution {
public://find shortest suffix that can be used as prefix to make it palindrome
    string shortestPalindrome(string s) {
        int n = s.length();

        string rev = s;
        reverse(rev.begin(),rev.end());

       for(int i=0;i<n;i++){
           if(!memcmp(s.c_str(),rev.c_str()+i,n-i)) {
               return rev.substr(0,i) + s;
           }
       }
      return rev + s;
    }
};
