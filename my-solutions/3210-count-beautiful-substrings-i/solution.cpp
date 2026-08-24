class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            int vowel = 0, consonant = 0;
            for (int j = i; j < s.length(); j++) {
                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' ||
                    s[j] == 'o' || s[j] == 'u') {
                    vowel++;
                } else {
                    consonant++;
                }
                if (vowel == consonant && (vowel * consonant) % k == 0)
                    ans++;
            }
        }
        return ans;
    }
};
