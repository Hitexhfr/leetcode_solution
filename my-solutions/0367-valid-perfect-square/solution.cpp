class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 1;
        int e = num;


        while(s<=e){
            int mid = s + (e-s)/2;
            long long square = 1LL * mid * mid;

            if(square == num){
                return true;
            }
            else if(square > num){
                e = mid -1;
            }
            else {
                s = mid + 1;
            }
        
        }
    return false;    
    }
};
