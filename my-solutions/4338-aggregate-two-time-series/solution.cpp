class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        long long n = series1.size(),m = series2.size(),i=0,j=0;
        vector <vector<int>> ans;
        while(i<n || j<m){
            int timestamp;

            if(i==n) timestamp= series2[j][0];
            else if(j==m) timestamp = series1[i][0];
            else timestamp = min(series1[i][0],series2[j][0]);

            int value1= 0,value2 = 0;

            if(i<n){
                value1= series1[i][1];
            }
            if(j<m){
                value2 = series2[j][1];
            }
            ans.push_back({timestamp,value1 + value2});

            if(i<n && series1[i][0]==timestamp) i++;
            if(j<m && series2[j][0]==timestamp) j++;
        }
    return ans;
    }
};
