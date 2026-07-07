class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0,x = 0;
        int i = 0;
        while(n>0){
            int bit = n%10;
            if(bit!=0){
                x = bit*pow(10,i) + x;
                i++;
                sum += bit;
            }
            n = n/10;
        }
    return x*sum;     
    }
};
