class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans ="";

        for(char ch:num){
            while(!ans.empty() && ch < ans.back() && k>0){
                ans.pop_back();
                k--;
            }
            if(!ans.empty() || ch!='0') ans.push_back(ch);  
        }
        while(!ans.empty() && k--){
            ans.pop_back();
        }
        return ans==""? "0":ans;
    }
};
