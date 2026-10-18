class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size(),n=grid[0].size();

        map<char, pair<int,int>> dir = {
            {'L',{0,-1}},
            {'R',{0,1}},
            {'U',{-1,0}},
            {'D',{1,0}}
        };

        vector <vector<bool>> visited(m,vector<bool> (n,false));

        int r = 0,c =0;

        while(true){
            visited[r][c] = true;

            auto [dr,dc] = dir[grid[r][c]];

            int nr = r + dr;
            int nc = c + dc;

            if(nr<0 || nr>=m || nc<0 || nc>=n) break;

            if(visited[nr][nc]) break;

            r = nr;
            c = nc;
        }
        return {r,c};
    }
};
