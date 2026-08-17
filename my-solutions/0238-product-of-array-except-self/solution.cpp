class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(); 
        vector <int> leftProduct(n);
        vector <int> rightProduct(n);

        int curr_product=1;leftProduct[0]=curr_product;

        for(int i = 1;i<n;i++){
            curr_product *= nums[i-1];
            leftProduct[i]= curr_product;
        }
        curr_product=1;rightProduct[n-1]=curr_product;
        for(int i = n-2;i>=0;i--){
            curr_product *= nums[i+1];
            rightProduct[i]= curr_product;
        }
        vector <int> ans(n);
        for(int i =0;i<n;i++){
            ans[i]= leftProduct[i]*rightProduct[i];
        }
        return ans;
    }
};
