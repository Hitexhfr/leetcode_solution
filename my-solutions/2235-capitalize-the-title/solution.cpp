class Solution {
public:
    string capitalizeTitle(string title) {
        string ans;
        int i = 0;
        while (i < title.length()) {
            string word;
            while (i < title.length() && isalpha(title[i])) {
                word += title[i];
                i++;
            }
            if (word.length() > 2) {
                word[0] = toupper(word[0]);
                for (int j = 1; j < word.length(); j++) {
                    word[j] = tolower(word[j]);
                }
            } else {
                for (int j = 0; j < word.length(); j++) {
                    word[j] = tolower(word[j]);
                }
            }
            ans += word;

            if (i < title.length()) {
                ans += title[i];
                i++;
            }
        }
        return ans;
    }
};
