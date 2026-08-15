class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int cost = requests[0];
        for(int i =1;i<requests.size();i++){
            cost += abs(requests[i]-requests[i-1]);
        }
        return cost;
    }
};
