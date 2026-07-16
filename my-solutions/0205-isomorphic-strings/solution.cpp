class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char mapST[256] = {0};
        char mapTS[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            char a = s[i];
            char b = t[i];

            if (mapST[a] == 0 && mapTS[b] == 0) {
                mapST[a] = b;
                mapTS[b] = a;
            }

            else {
                if (mapST[a] != b || mapTS[b] != a)
                    return false;
            }
        }    
    return true;             
    }
};
