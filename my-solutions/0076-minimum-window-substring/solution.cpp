class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length(), n = t.length(), mini = INT_MIN;
        if (n > m)
            return "";

        unordered_map<char, int> mp;

        for (char ch : t)
            mp[ch]++;

        int reqCnt = n, i = 0, j = 0;
        int minStart = 0, minWindow = INT_MAX;

        while (j < m) {
            char ch_j = s[j];
            mp[ch_j]--;

            if (mp[ch_j] >= 0)
                reqCnt--;
            while (reqCnt == 0) {
                if (j - i + 1 < minWindow) {
                    minWindow = j - i + 1;
                    minStart = i;
                }

                char ch_i = s[i];
                mp[ch_i]++;
                if (mp[ch_i] > 0) {
                    reqCnt++;
                }
                i++;
            }
            j++;
        }
        return minWindow == INT_MAX ? "" : s.substr(minStart, minWindow);
    }
};
