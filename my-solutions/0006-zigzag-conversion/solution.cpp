class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector <string> zigzag(numRows);

        int i = 0,row = 0;
        bool direction = 1;

        while(true){
            if(direction){
                while(row<numRows && i<s.length()){
                      zigzag[row++].push_back(s[i++]);
                }
                row -= 2;
            }
            else{
                while(row>=0 && i<s.length()){
                    zigzag[row--].push_back(s[i++]);
                }
                row = 1;
            }
            if(i>= s.length()) break;   
             direction = !direction;
        }  
        string ans;
        for(auto value : zigzag) ans+= value;
     return ans;     
    }
};
