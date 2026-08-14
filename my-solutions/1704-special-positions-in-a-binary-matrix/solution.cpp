class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row = mat.size(),col= mat[0].size(),count = 0;
        vector <int> rowcnt(row,0);vector <int> colcnt(col,0);

        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                if(mat[i][j]==1){
                    rowcnt[i]++;
                    colcnt[j]++;
                }  
            }
        }
        for(int i = 0;i<row;i++){
           for(int j = 0;j<col;j++){
                if(mat[i][j]==1 && (rowcnt[i]==1 && colcnt[j]==1)){
                    count++;
            }
          }
        }
        
        return count;
    }
};
