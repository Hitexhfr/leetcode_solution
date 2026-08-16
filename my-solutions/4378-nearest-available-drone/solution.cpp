class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int tx = target[0],ty= target[1];
        int mini = INT_MAX,ans = -1,n=drones.size();

        for(int i = 0;i<n;i++){
            int x = drones[i][0],y= drones[i][1],range= drones[i][2];

            int dist =abs(x-tx) + abs(y-ty);
            if(dist<=range){
                if(dist<mini){
                    mini = dist;
                    ans = i;
                }
            }
        }
        return ans;
    }
};
