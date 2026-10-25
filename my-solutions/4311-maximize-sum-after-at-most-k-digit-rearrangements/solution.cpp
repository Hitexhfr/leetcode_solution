class Solution {
public:
    int rearrange(int x){
        string s= to_string(x);
        sort(s.rbegin(),s.rend());

        return stoi(s);
    }
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum =0;
        vector <int> gains;

        for(int x:nums){
            sum += x;

            int best = rearrange(x);
            gains.push_back(best-x);
        }

        sort(gains.rbegin(),gains.rend());

        int i=0;
        while(k--){
            sum += gains[i++];
        }
        return sum;
    }
};
