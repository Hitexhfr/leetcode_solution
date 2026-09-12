class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int curr  = 0,lines = 0;
        for(int i = 0;i<s.length();i++){
           curr += widths[s[i] - 'a'];
           if(curr>100){
              lines++;
              curr = widths[s[i]-'a'];
           } 
        }
        lines++;
    return {lines,curr};
    }
};
