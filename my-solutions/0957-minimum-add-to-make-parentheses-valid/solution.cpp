class Solution {
public:
    int minAddToMakeValid(string s) {
        int open =0,ops=0;
        for(char c:s){
            if(c=='(') open++;
            else open ? open-- : ops++;
        }
        return open + ops;
    }
};
