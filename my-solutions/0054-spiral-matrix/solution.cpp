class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();

        
        
        int totalElement = m*n;
            
        int StartingRow = 0;
        int EndingRow = m-1;
        int EndingCol =  n -1;
        int StartingCol = 0;
          
         int count = 0;

         while(count<totalElement){
            for(int i = StartingCol; i<= EndingCol && count<totalElement; i++ ){
                  ans.push_back(matrix[StartingRow][i]);
                  count++;
                  }
            StartingRow++;      
            for(int i = StartingRow; i<= EndingRow  && count<totalElement; i++ ){
                  ans.push_back(matrix[i][EndingCol]); 
                  count++;    
            }
            EndingCol--;
            for(int i = EndingCol; i>= StartingCol  && count<totalElement; i-- ){
                  ans.push_back(matrix[EndingRow][i]);
                  count++;     
            }
            EndingRow--;
             for(int i = EndingRow; i>= StartingRow  && count<totalElement ; i-- ){
                  ans.push_back(matrix[i][StartingCol]);
                  count++;     
            }
            StartingCol++;
         } 

     return ans;
        
    }
};
