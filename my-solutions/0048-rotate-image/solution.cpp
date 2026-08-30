class Solution {
public://transpose && reverse
    void rotate(vector<vector<int>>& matrix) {
       int n = matrix.size();
       for(int i = 0;i<n;i++){
          for(int j = i;j<n;j++){
              swap(matrix[i][j],matrix[j][i]);
          }
       }

       for(int i = 0;i<n;i++){
           int start = 0,end = n-1;
           while(start<=end){
              int temp = matrix[i][start];
              matrix[i][start]=matrix[i][end];
              matrix[i][end]= temp;
              start++;end--;
           }
       }
       matrix;
    }
};
