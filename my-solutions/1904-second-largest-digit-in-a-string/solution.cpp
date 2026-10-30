class Solution {
public:
    int secondHighest(string s) {
        vector <int> freq(10,0);

        for(char ch:s){
            if(isdigit(ch)) freq[ch-'0']++;
        }

        bool first = false;

        for(int i=9;i>=0;i--){
            if(first && freq[i]>0) return i;
            if(freq[i]>0) first = true;
        }
        return -1;
    }
};
