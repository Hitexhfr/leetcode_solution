class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size(),n = mat[0].size();
        vector <int> ans(2,-1);
        for (int i = 0; i < m; i++) {
            int curr = 0;
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) curr++;
            }
            if (ans[1] < curr) {
                ans[0] = i; ans[1] = curr;
            }
        }
       return ans;
    }
};
