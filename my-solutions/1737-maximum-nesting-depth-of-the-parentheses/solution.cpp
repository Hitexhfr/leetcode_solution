class Solution {
public:
    int maxDepth(string s) {
       int maxD = 0,count=0;
       for(char ch:s){
        if(ch == '('){
            count++;
            maxD = max(maxD,count);
        }
        else if(ch == ')'){
            count--;
        }
       }
      return maxD;  
    }
};
