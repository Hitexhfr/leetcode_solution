class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.length();
        if(n!=goal.length()) return false; 
        if(s==goal){
            vector<int> freq(26,0);
            for(char ch:s)freq[ch - 'a']++;
            for(int i = 0;i<26;i++){
                if(freq[i]>=2) return true;
            }
            return false;
        }
        vector <int> index;
        for(int i = 0;i<n;i++){
            if(s[i]!=goal[i]) index.push_back(i);
            if(index.size()>2) return false;
        }
        if(index.size()!=2) return false;
        swap(s[index[0]],s[index[1]]);
       return s == goal;
       }
    };
