class Solution {
public://i can do binary search on answers here,as its asiking to maximize no of tasks done
    bool isPossible(vector<int> tasks, vector<int> workers,int mid, int pills, int strength){
        int pillsUsed = 0;
        multiset<int> st(workers.begin(),workers.begin()+mid);
        
        //try to assign  workers with higher strength -> greater task if not then do the lower bound 
        //best scenario is when my weakest worker can do the highest strength task with pill

        for(int i = mid -1;i>=0;i--){
            int required = tasks[i];

            auto it = prev(st.end());

            if(*it>=required){
                st.erase(it);
            }
            else if(pillsUsed >= pills){
                return false;
            }
            else{
                auto weakestworkerIt = st.lower_bound(required-strength);

                if(weakestworkerIt == st.end()) return false;

                st.erase(weakestworkerIt);
             pillsUsed++;
            }
      }
  return true;
 }
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        int start = 0,end = min(tasks.size(),workers.size());
        sort(tasks.begin(),tasks.end());
        sort(workers.begin(),workers.end(),greater<int>());
        
        int ans = 0;
        while(start<=end){
           int mid = start + (end-start)/2;

           if(isPossible(tasks,workers,mid,pills,strength)){
               ans = mid;
               start = mid +1;
           }
           else{
               end = mid -1;
           }
        }
        return ans;  
    }
};
