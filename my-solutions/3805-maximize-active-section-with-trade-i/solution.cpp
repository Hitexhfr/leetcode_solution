class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int l = s.length(), ones = 0;
        vector <int> sections;

        int i = 0;
        while (i < l) {
            if (s[i] == '0') {
                int j = i;
                while (j < l && s[j] == s[i]) {
                    j++;
                }
                sections.push_back(j - i);
                i = j;
            } else {
                ones++;
                i++;
            }
        }

        if (sections.size() < 2)
            return ones;

        int best = 0;

        for (int i = 1; i < sections.size(); i++) {
            best = max(best, sections[i] + sections[i - 1]);
        }
    return ones + best;
    }
};
