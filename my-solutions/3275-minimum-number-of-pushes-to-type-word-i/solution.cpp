class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length(),ans = 0,cost = 0;
        for(int i = 1;i<=n;i++){
            if((i-1)%8==0) cost++;
            ans += cost;
        }
    return ans;    
    }
};
