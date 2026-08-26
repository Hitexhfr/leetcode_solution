class Solution {
public://i can do this like the island perimeter one,but here the catch is i need all 1 in that col, otherwise reduce the width
    int ans = 0,m,n;
    void dfs(vector<vector<char>>& matrix,int i,int j,int width,int height){
          if(i>=m ||j>=n || matrix[i][j]=='0') return;
          
          int currWidth =  0;
          while(j+currWidth<n && matrix[i][j+currWidth]=='1') currWidth++;

          width = min(width,currWidth);
          height++;

          ans = max(ans,width*height);

          dfs(matrix,i+1,j,width,height);
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) { 
        m = matrix.size(), n = matrix[0].size();
        for(int i =0 ;i<m;i++){
            for(int j = 0;j<n;j++){
                if(matrix[i][j]=='1'){
                    dfs(matrix,i,j,n,0);
                }
            }
        }
       return ans; 
    }
};
