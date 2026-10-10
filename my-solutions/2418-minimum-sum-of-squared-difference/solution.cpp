class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector <int> diff(n);
        long long k = (long long)k1 + k2;
       
        int maxi = 0;
        for(int i = 0;i<n;i++){
              diff[i] = abs(nums1[i]-nums2[i]);
              maxi = max(diff[i],maxi);
        } 

       long long total = 0;
       for(int x:diff) total += x;

       if(k>= total) return 0;
         
        vector<int> freq(maxi+1,0);

        for(int x:diff) freq[x]++;

        for(int i = maxi;i>=1 && k>0;i--){
            int ops = min((long long)freq[i],k);

            freq[i] -= ops;
            freq[i-1] += ops;

            k-= ops;
        }

        long long ans= 0;

        for(int i = 1;i<=maxi;i++){
            ans += 1LL *i*i*freq[i];
        }
      return ans;
    }
};
