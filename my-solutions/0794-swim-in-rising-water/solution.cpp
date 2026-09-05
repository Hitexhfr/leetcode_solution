class Solution {
public:
    int n;
    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool isPossibleToReach(vector<vector<int>>& grid,int i,int j, int time,vector <vector<bool>>& visited){
        if(i>=n || i<0 || j>=n || j<0 || visited[i][j]==true || grid[i][j]>time) return false;
        
        visited[i][j] = true;

        if(i==n-1 && j== n-1) return true;

        for(auto &dir:directions){
            int i_ = i + dir[0],j_ = j+ dir[1];

            if(isPossibleToReach(grid,i_,j_,time,visited)) return true;
        }
    return false;
    }
    int swimInWater(vector<vector<int>>& grid) {
       n = grid.size();
       int  s = grid[0][0];
       int e = n*n -1;

       int result = 0;

       while(s<=e){
          int mid = s+(e-s)/2;
          vector <vector<bool>> visited(n,vector<bool>(n,false));
          if(isPossibleToReach(grid,0,0,mid,visited)){
            result = mid;
            e = mid -1;
          }
          else{
             s= mid+1;
          }
       }
       return result;
    }
};
