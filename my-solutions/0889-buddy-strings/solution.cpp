class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.length();

        if(n!= goal.length()) return false;
        
        if(s==goal){
            vector<int> freq(26,0);

            for(char ch:s) {
                freq[ch - 'a']++;
            }

            for(int i = 0;i<26;i++){
                if(freq[i]>=2) return true;
            }
            return false;
        }

        vector <int> idx;

        for(int i = 0;i<n;i++){
            if(s[i]!=goal[i]){
                idx.push_back(i);
            }
        }

        if(idx.size()!=2) return false;

        int i = idx[0],j=idx[1];

        swap(s[i],s[j]);

        return s==goal;
    }
};
