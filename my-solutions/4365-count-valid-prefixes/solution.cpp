class Solution {
public:
    int countValidPrefixes(string s) {
        int zeroes =0,ones = 0, ans = 0;
        for(auto value:s){
            if(value=='1') {
                ones++;}
            else {
                zeroes++;}

          if(abs(zeroes-ones)<=1){
              ans++;}  
        }
        return ans;
    }
};
