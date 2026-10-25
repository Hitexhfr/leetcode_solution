class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i=0;i<n;i++){
            unordered_map<int,int> freq;

            vector <int> order;

            for(int j=i;j<n;j++){
                 int x = nums[j];
                if(freq.find(x)==freq.end())order.push_back(x);
                freq[x]++;

                bool check = true;

                for(int k =0;k<order.size();k++){
                    if(freq[order[k]]!=k+1){
                        check = false;
                        break;
                    }
                }
                if(check) ans++;
            }
        }
      return ans;  
    }
};
