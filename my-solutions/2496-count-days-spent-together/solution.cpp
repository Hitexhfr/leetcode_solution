class Solution {
public:
     int convert(string date){
         int daysInMonth[] = {
             31,28,31,30,31,30,31,31,30,31,30,31
         };
         
         int month = stoi(date.substr(0,2));
         int day = stoi(date.substr(3,2));
         
         for(int i=0;i<month -1;i++){
             day += daysInMonth[i];
         }
         return day;
     }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int S1 = convert(arriveAlice);
        int E1 = convert(leaveAlice);
        
        int S2 = convert(arriveBob);
        int E2 = convert(leaveBob);
        
        int start = max(S1,S2);
        int end =min(E1,E2);
        
        if(start>end) return 0;
        
        return end - start+1;
    }
};
