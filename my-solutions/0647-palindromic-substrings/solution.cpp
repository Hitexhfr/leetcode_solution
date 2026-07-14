class Solution {
public:
    int palindromeCount(string s,int i,int j){
        int count = 0;
        while(i>=0&&j<s.length()&&s[i]==s[j]){
             count++;
        i--,j++;    
        }
    return count;    
    }
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0;i<s.length();i++){
            //even substring count check crow
            int event_count = palindromeCount(s,i,i+1);
            count = count + event_count;
            //odd substing count check crow
            int odd_count = palindromeCount(s,i,i);
            count = count + odd_count;
        }
    return count;      
    }
};
