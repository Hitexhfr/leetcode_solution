class Solution {
public:
    int minChanges(string s) {
        int changes = 0;
        char prev = s[0];
        int count = 1;
        
        for(int i =1;i<s.length();i++){
            if(s[i]==prev){
                count++;
                continue;
            }
            if(count%2==0){
                count = 1;
            }
            else{
                count = 0;
                changes++;
            }
            prev = s[i];
        }
       return changes; 
    }
};
