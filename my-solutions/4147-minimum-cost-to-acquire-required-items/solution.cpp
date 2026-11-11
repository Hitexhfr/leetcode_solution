class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long total = 0;

        if(cost1 + cost2 <= costBoth){
             total = 1LL*need1*cost1 + 1LL*need2*cost2;
        }
        else{
            int min_need = min(need1,need2);
            total = 1LL*min_need*costBoth;

            need1 -= min_need;
            need2 -= min_need;

            if(need1>0) total += 1LL*need1*min(cost1,costBoth);
            else if(need2>0)  total += 1LL*need2*min(cost2,costBoth);
        }
        return total;
    }
};
