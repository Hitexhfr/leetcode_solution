class Solution {
public:
   bool isPalindrome(string& s,int start,int end){
       while(start<=end){
           if(s[start]!= s[end]){
             return false;
           }
           start++,end--;
       }
       return true;
   }
   string longestPalindrome(string s) {
        int maxD =0;string ans;
        for(int i = 0;i<s.length();i++){
            for(int j =i;j<s.length();j++){
                if(j-i+1>maxD){
                if(isPalindrome(s,i,j)){
                        maxD=j-i+1;
                        ans = s.substr(i,j-i+1);
                    }
                }
            }
        }
       return ans;  
    }
};
