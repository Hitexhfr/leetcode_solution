class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0;
       
        while (i < typed.length()) {
            if (j < name.length() && typed[i] == name[j]) {
                j++;
            } else if (i == 0 || typed[i]!=typed[i-1]) {
                return false;
            }
            i++;
        }
        return j==name.size();
    }
};
