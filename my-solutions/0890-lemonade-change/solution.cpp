class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> coins (3,0);
        for(int x:bills){
            if(x==5){
              coins[0]++;
              }
            else if(x==10){
                coins[1]++;
                if(coins[0]>=1){
                    coins[0]-=1;
                }
                else{
                    return false;
                }
              }
            else {
                coins[2]++;
                if(coins[1]>=1 && coins [0]>=1) {
                    coins[1]--;
                    coins[0]--;
                }
                else if(coins[0]>=3){
                    coins[0] -= 3;
                }
                else{
                    return false;
                }
                
                
            }
         }
    return true;
    }
};
