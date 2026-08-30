class Solution {
public:
    string reorganizeString(string s) {
        int n = s.length();
        vector<int> freq(26, 0);
        string ans(n, ' ');

        for (char ch : s)
            freq[ch - 'a']++;

        char ch_maxi = s[0];
        int maxi = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxi) {
                maxi = freq[i];
                ch_maxi = i + 'a';
            }
        }

        int idx = 0;

        while (maxi > 0 && idx < n) {
            ans[idx] = ch_maxi;
            idx += 2;
            maxi--;
        }

        if (maxi>0)
            return "";

        freq[ch_maxi - 'a'] = 0;

        for (int i = 0; i < 26; i++) {
            while (freq[i]!=0) {
                if (idx >= n){
                    idx=1;
                }
                ans[idx] = i + 'a';
                idx += 2;
                freq[i]--;
            }
        }
        return ans;
    }
};
