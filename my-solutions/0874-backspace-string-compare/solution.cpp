class Solution {
public:
    string process(string s) {
        int i = 0;
        while (i < s.length()) {
              if (s[i] == '#') {
                if (i == 0) {
                    s.erase(i, 1);
                }
                else {
                    s.erase(i - 1, 2);
                }
                i = max(0, i - 1);
            }
            else {
                i++;
            }
        }

        return s;
    }
    bool backspaceCompare(string s, string t) {
        s = process(s);
        t = process(t);
       
    return s==t;    
    }  
};
