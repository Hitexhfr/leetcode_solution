class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int h = numbers.size() -1;
        vector <int> idx;

        while(l<h){
            int sum = numbers[l] + numbers[h];
            if(sum==target){
                idx.push_back(l+1);
                idx.push_back(h+1);
                break;
         }
            if(sum > target){
                h--;
            }
            else{
                l++;
            }
        }
        return idx;
    }
};
