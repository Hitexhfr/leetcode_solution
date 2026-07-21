class Solution {
public:
    string process(string s) {
        string ans;
        for(auto value : s){
             if(value=='#'){
                if(!ans.empty()){
                   ans.pop_back();
                }
            }
            else{
                ans.push_back(value);
            }
         }
    return ans;
    }
    bool backspaceCompare(string s, string t) {
        s = process(s);
        t = process(t);
       
    return s==t;    
    }  
};
