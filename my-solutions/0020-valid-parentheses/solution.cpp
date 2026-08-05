class Solution {
public:
    bool isValid(string s) {
        string st;

        for (char ch : s) {
            if (!st.empty() && ((st.back() == '(' && ch == ')') ||
                                (st.back() == '{' && ch == '}') ||
                                (st.back() == '[' && ch == ']'))) {
                st.pop_back();
            } else {
                st.push_back(ch);
            }
        }

        return st.empty();
    }
};
