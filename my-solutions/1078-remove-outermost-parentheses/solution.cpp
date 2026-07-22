class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;int cnter = 0;
        for(char ch : s){
            if(ch=='('){
                cnter++;if(cnter>1) ans+=ch;
            }
            else{
                cnter--;if(cnter>0) ans+= ch;
            }
        }
    return ans;  
    }
};
