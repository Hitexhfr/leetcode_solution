class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i ,int j,int& peri,int m,int n){
        if(i<0 || i>=m || j<0|| j>=n || grid[i][j]==0){
            peri++;
            return;
        }
        if(grid[i][j]==-1) {
           return;
        }
        
        grid[i][j]=-1;
        
        dfs(grid,i-1,j,peri,m,n);
        dfs(grid,i+1,j,peri,m,n);
        dfs(grid,i,j-1,peri,m,n);
        dfs(grid,i,j+1,peri,m,n);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size(),peri = 0;

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j,peri,m,n);
                    return peri;
                }
            }
        }
       return -1; 
    }
};
