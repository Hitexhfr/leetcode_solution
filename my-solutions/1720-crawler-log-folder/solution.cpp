class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        
        for(int i=0;i<logs.size();i++){
            string curr = logs[i];

            if(curr=="../") depth = max(0,depth-1);
            else if(curr!="./") depth++;
        }
        return depth;
    }
};
