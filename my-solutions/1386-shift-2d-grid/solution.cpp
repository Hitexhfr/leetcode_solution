class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(),n=grid[0].size();
        vector<int> v;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                v.push_back(grid[i][j]);
            }
        }
         
        k %= (m*n);
        rotate(v.begin(), v.end() - k, v.end());
        int idx = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                grid[i][j] = v[idx];
                idx++;
            }
        }
    return grid;       
    }
};
