class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int i=left;i<=right;i++){
            int x = i;

            bool check = true;

            while(x){
                int digit = x%10;
                if((digit!= 0 && i%digit!=0) || digit==0) check = false;
                x /= 10;
            }

            if(check) ans.push_back(i);
        }
        return ans;
    }
};
