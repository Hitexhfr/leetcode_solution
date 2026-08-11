class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int x:nums){
            int digits = 0;
            while(x>0){
                x /=10;
                digits++;
            }
            if(digits%2==0) cnt++;
        }
      return cnt;  
    }
};
