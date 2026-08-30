class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxi = *max_element(candies.begin(),candies.end());

        vector <bool> isMax(n);

        for(int i =0;i<n;i++){
            if(candies[i] + extraCandies >= maxi){
                isMax[i] = true;
            }
            else{
                isMax[i] = false;
            }
        }
        return isMax;
    }
};
