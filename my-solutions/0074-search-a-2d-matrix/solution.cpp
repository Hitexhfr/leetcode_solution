class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int size = m*n; 
        int start = 0;
        int end = size - 1;

        while(start<=end){
            int mid =  start + (end-start)/2;
            int rowIdx = mid/n;
            int colIdx = mid%n;

            if(matrix[rowIdx][colIdx]==target){
                return true;
            }
            else if(matrix[rowIdx][colIdx]>target){
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
    return false;
    }
};
