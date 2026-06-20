class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector <int> idx{-1,-1};
        int start = 0;
        int end = nums.size() -1;
        

        while(start<=end){
            int mid = start + (end - start)/2;
            if(nums[mid]== target){
               idx[0] = mid;
                end = mid - 1;
            }
            else if(nums[mid]<target){
                start = mid + 1;
                }
            else{
                end = mid -1;    
           }

        }   


        start = 0;
        end = nums.size() -1;
        

        while(start<=end){
            int mid = start + (end - start)/2;
            if(nums[mid]== target){
               idx[1] = mid;
                start = mid + 1;
            }
            else if(nums[mid]<target){
                start = mid + 1;
                }
            else{
                end = mid -1;    
           }

        }
        return idx;
  } 

};
