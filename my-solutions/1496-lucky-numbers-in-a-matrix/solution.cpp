class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size(),n= matrix[0].size();
        vector <int> rMin(m,INT_MAX),cMax(n,INT_MIN);
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                rMin[i] = min(rMin[i],matrix[i][j]);
                cMax[j] = max(cMax[j],matrix[i][j]);
            }
        }
        vector <int> ans;
        for(int i = 0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==rMin[i] && matrix[i][j]==cMax[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};
