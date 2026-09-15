class Solution {
public:
    bool isPalindrome(string s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
        i++,j--;    
        }
        return true;
    }
    int maxPalindromes(string s, int k) {
        int n = s.length(),count = 0,i = 0;

        while(i<n){
            if(i + k-1<n && isPalindrome(s,i,i+k-1)){
                count++;i+= k;
            }
            else if(i+k<n && isPalindrome(s,i,i+k)){
                count++;i+= k+1;
            }
            else{
                i++;
            }
        }
        return count;
    }
};
