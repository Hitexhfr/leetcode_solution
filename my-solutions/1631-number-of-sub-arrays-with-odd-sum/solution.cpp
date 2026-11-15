class Solution {
public:
    const int mod = 1e9 + 7;
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector <int> preSum(n);

        preSum[0] = arr[0];

        for(int i=1;i<n;i++) preSum[i] = preSum[i-1] + arr[i];

        int cnt1 = 1,cnt2 =0;
        long long ans =0;

        for(int i=0;i<n;i++){
            if(preSum[i]%2){
                cnt2++;
                ans = (ans+cnt1)%mod;
            }
            if(preSum[i]%2==0){
                cnt1++;
                ans = (ans+cnt2)%mod;
            }
        }
        return (int)ans%mod;
    }
};
