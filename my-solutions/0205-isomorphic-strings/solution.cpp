class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector <int> st(255,0);
        vector <int> ts(255,0);
        int counter = 1;
        for(int i = 0;i<s.length();i++){
            char a = s[i],b=t[i];
            if(st[a]==0 && ts[b]==0){
                st[a]=counter;ts[b]= counter;
                counter++;
            }
            else if(st[a]!=ts[b]){
                return false;
            }
        }
        
    return true;             
    }
};
