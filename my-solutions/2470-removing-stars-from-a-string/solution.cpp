class Solution {
public:
    string process(string s){
       string ans;
       for(auto value : s){
          if(value == '*'){
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
    string removeStars(string s) {
        return process(s);
    }
};
