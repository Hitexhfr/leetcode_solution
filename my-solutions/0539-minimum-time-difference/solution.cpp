class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector <int> minute;

        for(int i = 0;i<timePoints.size();i++){
            string curr = timePoints[i];
            int hour = stoi(curr.substr(0,2));
            int minut = stoi(curr.substr(3,2));
            int total_min = hour*60 + minut;

            minute.push_back(total_min);
        }
        sort(minute.begin(),minute.end());
        int mini = INT_MAX;
         
        for(int i = 0;i<minute.size()-1;i++){
            int diff = minute[i+1]-minute[i];
            mini = min(mini,diff);
        }

        int diff2 = minute[0]+1440 - minute[minute.size()-1];
        mini = min(mini,diff2);
    return mini;
    }     
};
