class Solution {
public:
bool isPossible(vector <int> &weights,int n,int days,int sol){
        int totalSum = 0;
        int count  = 1;

        for(int i = 0;i<n;i++){
            if(weights[i]>sol) return false;
            if(totalSum + weights[i]<=sol){
                totalSum = totalSum + weights[i];
            }
        else{
            totalSum = weights[i];
            count++;
              if(count>days){
                    return false;
                    }
                }
        }
    return true;
} 
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int ans = -1;

        int start = *max_element(weights.begin(),weights.end()) ;
        int end = accumulate(weights.begin(),weights.end(),0);

        while(start<=end){
            int mid = start + (end - start)/2;
            
            if(isPossible(weights,n,days,mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
    return ans;    
    }
};
