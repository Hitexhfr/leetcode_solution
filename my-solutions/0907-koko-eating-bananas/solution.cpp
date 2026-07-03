class Solution {
public:
    bool canEat(vector<int>& piles, int h,int mid){
        int actualHours = 0;
        for(int &x : piles){
            actualHours += x/mid;
            if(x%mid!=0){
                actualHours++;
            }
        }
    return actualHours<= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *max_element(begin(piles),end(piles));


        while(s<e){
            int mid = s + (e-s)/2;
            if(canEat(piles,h,mid)){
                e = mid;
            }
            else{
                s = mid + 1;
            }
        }
    return e;  
    }
};
