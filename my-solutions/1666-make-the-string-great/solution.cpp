class Solution {
public:
    string makeGood(string s) {
        stack <char> st;

        for(char ch:s){
            if(st.size() && abs(st.top()-ch)==32)st.pop();
            else st.push(ch);
        }
        string ans;

        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
