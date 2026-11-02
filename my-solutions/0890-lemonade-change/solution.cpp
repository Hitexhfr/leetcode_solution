class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0,tens= 0,twenties=0;
        for(int x:bills){
            if(x==5){
              fives++;
              }
            else if(x==10){
                tens++;
                if(fives>=1){
                   fives--;
                }
                else{
                    return false;
                }
              }
            else {
                twenties++;
                if(tens>=1 && fives>=1) {
                    tens--;
                    fives--;
                }
                else if(fives>=3){
                    fives -= 3;
                }
                else{
                    return false;
                }
            }
         }
    return true;
    }
};
