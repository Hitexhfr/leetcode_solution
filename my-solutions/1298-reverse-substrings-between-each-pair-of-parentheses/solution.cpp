class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string ans;
        for(char ch:s){
            if(ch=='('){
                st.push(ans.size());
            }
            else if(ch==')'){
                int l = st.size()>0 ? st.top() : 0;
                st.pop();
                reverse(ans.begin()+l,ans.end());
            }
            else{
                ans += ch;
            }
        }
        return ans;
    }
};
