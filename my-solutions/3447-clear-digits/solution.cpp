class Solution {
public:
    string clearDigits(string s) {
        string ans;

        for(char ch:s){
            if(!ans.empty() && !isalpha(ch)) ans.pop_back();
            else ans.push_back(ch);
        }
        return ans;
    }
};
