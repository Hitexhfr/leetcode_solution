class Solution {
public:
    int reverseDegree(string s) {
        int degree = 0,idx =1;
        for(char ch:s){
            int curr= 26 -(ch - 'a');
            degree += curr*idx;
            idx++;
        }
        return degree;
    }
};
