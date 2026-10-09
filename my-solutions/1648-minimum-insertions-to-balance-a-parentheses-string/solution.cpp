class Solution {
public:
    int minInsertions(string s) {
       int count =0,ops = 0;

       for(int i = 0;i<s.length();i++){
           if(s[i]=='('){
               count++;
           }
           else{
               if(count>0) count--;
               else ops++; 

               if(i<s.length()-1 && s[i+1]==')') i++;
               else ops++;
           }
       }
    return ops + 2*count;
    }
};
