class Solution {
public:
    string rearrangeString(string s, char x, char y) {

        if(s.find(x)==string::npos || s.find(y)==string::npos)
            return s;
        string ans;

        for(char value:s){
            if(value==y)
                ans+=value;
        }
        for(char value:s){
            if(value!=x && value!=y)
                ans+=value;
        }
        for(char value:s){
            if(value==x)
                ans+=value;
        }
    return ans;   
    }
};
