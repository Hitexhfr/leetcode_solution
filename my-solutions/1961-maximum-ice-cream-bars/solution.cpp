class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
          sort(begin(costs),end(costs));
          int iceCount = 0;
          for(int value:costs){
                if (coins < value)
                    break;
                iceCount++;
                coins -= value;
            }
    return iceCount;    
    }
};
