class Solution {
public:
    bool validDigit(int n, int x) {
        if(n>=0 && n<=9) return false;
        bool check1 = false, check2 = false;
        while(n){
          int curr = n%10;
          if(curr==x) check1 = true;
          if(n>=0 && n<=9 && n!=x) check2= true;
          n/=10; 
        }
        return (check1 && check2);
    }
};
