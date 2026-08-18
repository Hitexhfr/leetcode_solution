class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size(),n= matrix[0].size();
        vector <int> rMin;
        for(int i  = 0;i<m;i++){
            int mini = INT_MAX;
            for(int j = 0;j<n;j++){
                mini = min(matrix[i][j],mini);
            }
            rMin.push_back(mini);
        }
        vector <int> cMax;
        for(int i = 0;i<n;i++){
            int maxi = INT_MIN;
            for(int j = 0;j<m;j++){
                maxi = max(matrix[j][i],maxi);
            }
            cMax.push_back(maxi);
        }
        vector <int> ans;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(matrix[i][j]==rMin[i] && matrix[i][j]==cMax[j]){
                     ans.push_back(matrix[i][j]);
                }   
            }
        }
        return ans;
    }
};
