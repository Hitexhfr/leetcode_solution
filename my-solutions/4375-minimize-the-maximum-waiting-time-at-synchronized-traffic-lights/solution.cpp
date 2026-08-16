class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
       int maxi = *max_element(lights.begin(),lights.end()),ans = 0;
       for(auto value:arrivalTime){
           int wait = 0, pos = value % period;
           if(pos<maxi) wait = 0;
           else wait = period - pos;
         ans = max(ans,wait);  
       }
    return ans;
    }
};
