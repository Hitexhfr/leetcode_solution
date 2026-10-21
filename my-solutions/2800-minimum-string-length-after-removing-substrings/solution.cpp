class Solution {
public:
    int minLength(string s) {
        string ans;

        for(char ch:s){
            if(!ans.empty() && ((ch=='B' && ans.back()=='A') || (ch=='D' && ans.back()=='C'))){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans.length();
    }
};
