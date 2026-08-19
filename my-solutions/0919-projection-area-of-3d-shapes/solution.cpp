class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int m = grid.size(),ans = 0;
        for(int i = 0;i<m;i++){
           int rowMax = 0,colMax = 0;
           for(int j = 0;j<m;j++){
                if(grid[i][j]>0) ans++ ;
                rowMax = max(rowMax,grid[i][j]);
                colMax = max(colMax,grid[j][i]);
            }
            ans =  ans + rowMax + colMax;
        }
        return ans;
    }
};
