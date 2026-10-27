class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector <string> grid(m);

        string topRow(n,'.');
        string remaining = string(n-1,'#')+ '.';

        grid[0] = topRow;

        for(int i=1;i<m;i++){
            grid[i] = remaining;
        }
      return grid;
    }
};
