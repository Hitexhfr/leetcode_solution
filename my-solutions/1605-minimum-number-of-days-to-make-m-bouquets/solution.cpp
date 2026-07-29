class Solution {
public:
    bool isPossible(vector <int>& nums,int ans,int m,int k){
           int cnt = 0,i =0;
           while(i<nums.size()){
            if(nums[i]<=ans){
                cnt++;
            }
            if(cnt==k){
                cnt=0;
                m--;
            }
            else if(nums[i]>ans){
                cnt = 0;
            }
            if(m==0) return true;
            i++;
           }
      return false;     
      }
    int minDays(vector<int>& nums, int m, int k) {
        int s = *min_element(begin(nums),end(nums));
        int e = *max_element(begin(nums),end(nums));
        int ans = -1;

        while(s<=e){
            int mid = s +(e-s)/2;
            if(isPossible(nums,mid,m,k)){
                 ans = mid;
                 e = mid -1;
            }
            else{
                s = mid+1;
            }
        }
return ans;  
    }
};
