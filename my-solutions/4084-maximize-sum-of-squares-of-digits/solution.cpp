class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(9*num<sum) return "";
        
        int curr = sum;
        string ans;
        
        for(int i=0;i<num;i++){
            int value = min(9,curr);
            ans += char('0' + value);
            curr -= value;
        }
        return ans;
    }
};
