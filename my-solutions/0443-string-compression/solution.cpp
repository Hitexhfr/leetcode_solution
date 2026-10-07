class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1, idx = 0;
        char prev = chars[0];

        for (int i = 1; i < chars.size(); i++) {
            if (chars[i] == prev) {
                count++;
            } else {
                chars[idx++] = prev;

                if (count > 1) {
                    int start = idx;
                    while (count) {
                        chars[idx++] = count % 10 + '0';
                        count /= 10;
                    }
                    reverse(chars.begin() + start, chars.begin() + idx);
                }
                    prev = chars[i];
                    count = 1;
            }
        }
        chars[idx++] = prev;
        if (count > 1) {
            int start = idx;
            while (count) {
                chars[idx++] = count % 10 + '0';
                count /= 10;
            }
            reverse(chars.begin() + start, chars.begin() + idx);
           }
           return idx;
       }
    };
