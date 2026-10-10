class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector <int> freq(n*n +1,0);

        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                int x = grid[i][j];
                freq[x]++;
            }
        }
        int a = 0,b=0;
        for(int i=1;i<n*n+1;i++){
            if(freq[i]==2) a = i;
            if(freq[i]==0) b = i; 
        }
        return {a,b};
    }
};
