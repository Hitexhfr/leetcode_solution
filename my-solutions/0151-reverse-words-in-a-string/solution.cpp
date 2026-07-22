class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s); string result = "",token = "";
        while(ss>>token) result = token + " " + result;
    return result.substr(0,result.size()-1);
    }
};
