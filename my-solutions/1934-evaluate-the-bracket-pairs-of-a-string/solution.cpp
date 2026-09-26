class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(auto &vec: knowledge) mp[vec[0]] = vec[1];
        
        string ans;
        int i=0;
        while(i<s.length()){
            if(isalpha(s[i])){
                ans += s[i];
            }
           else{
               i++;
               string curr;
               while(i<s.length() && s[i]!=')'){
                   curr += s[i];
                   i++;
               }
               ans += mp.count(curr) ? mp[curr]: "?";
           }
           i++;
        }
        return ans;
    }
};
