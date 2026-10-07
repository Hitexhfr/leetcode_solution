class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(),n= mat[0].size();
        int ans = 0;

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(mat[i][j]!=1) continue;

                bool isSpecial = true;
                for(int row = 0;row<m;row++){
                    if(row!=i && mat[row][j]==1){
                        isSpecial = false;
                  }
               }
                for(int col = 0;col<n;col++){
                    if(col!=j && mat[i][col]==1){
                        isSpecial = false;
                  }
               }
               if(isSpecial) ans++;
            }
        }
        return ans;
    }
};
