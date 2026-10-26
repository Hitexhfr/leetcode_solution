class Solution {
public:int m,n;
    long long dfs(vector<vector<int>>& grid,vector<vector<int>>& visited,int i,int j){
        if(i<0 || i>=m || j<0|| j>=n || visited[i][j] || grid[i][j] == 0) return 0;
       
        visited[i][j] =1;
         
        long long left = dfs(grid,visited,i,j-1);
        long long right = dfs(grid,visited,i,j+1);

        long long up = dfs(grid,visited,i-1,j);
        long long down = dfs(grid,visited,i+1,j);
         
        return (long long) grid[i][j] + left + right + up + down;
    }
    
    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size(),n=grid[0].size();
        int count =0;
        
        vector<vector<int>> visited(m, vector<int>(n, 0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j]!=0){
                    long long sum = dfs(grid,visited,i,j);

                    if(sum%k==0) count++;
                }
            }
        }
        return count;
    }
};
