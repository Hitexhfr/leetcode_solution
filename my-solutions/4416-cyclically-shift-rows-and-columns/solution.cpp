class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> temp(n,vector<int> (n));
        vector<vector<int>> ans(n,vector<int> (n));

        for(int i =0 ;i<n;i++){
            int shift = rowShift[i]%n;
            for(int j = 0;j<n;j++){
                int newCol = (j - shift + n)%n;
                temp[i][newCol] = grid[i][j];
            }
        }
        for(int j =0 ;j<n;j++){
            int shift = colShift[j]%n;
            for(int i = 0;i<n;i++){
                int newRow = (i - shift + n)%n;
                ans[newRow][j] = temp[i][j];
            }
        }
        return ans;
    }
};
