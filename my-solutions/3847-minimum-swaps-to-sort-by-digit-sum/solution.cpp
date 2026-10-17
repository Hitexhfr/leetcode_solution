class Solution {
public:
    int getdigitSum(int n){
        int digit = 0;
        while(n>0){
            digit += n%10;
            n/= 10;
        }
        return digit;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector <int> afterSorted(nums);
         
        auto lamda = [&](int num1,int num2){
            int digitSum1 = getdigitSum(num1);
            int digitSum2 = getdigitSum(num2);

            if(digitSum1 != digitSum2) return digitSum1 < digitSum2;

        return num1 < num2;
        };
        sort(begin(afterSorted),end(afterSorted),lamda);

        unordered_map<int,int> valueToIdx;

        for(int i=0;i<n;i++){
            valueToIdx[nums[i]] = i;
        }
        
        int swapsCount = 0;
        for(int i=0;i<n;i++){
            int want = afterSorted[i],curr = nums[i];
            if(want == curr) continue;

            int idx = valueToIdx[want];

            nums[i] = want;
            nums[idx] = curr;
           
           valueToIdx[want] = i; 
           valueToIdx[curr] = idx;
        swapsCount++;   
        }
      return swapsCount;
    }
};
