class Solution {
public:
    bool isPossible(vector <int>& position,int n,int m,int sol){
        int count = 1;
        int j = 0;
        int i = 1;

        while(i<n){
            if(abs(position[i]-position[j])>=sol){
                count++;
                j = i;
                if(count==m){
                    return true;
                }
            }
        i++;    
        }
     return false;   
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int s = 1;
        int n = position.size();
        int e = position[n-1] - position[0]; 
        int ans = -1;

        while(s<=e){
            int mid = s +(e-s)/2;

            if(isPossible(position,n,m,mid)){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    return ans;    
    }
};
