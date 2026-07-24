class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty())
            return 0;
        if (haystack.length()<needle.length())
            return -1;    
        int i = 0;
        while(i<=haystack.length()-needle.length()){
            if(haystack[i]==needle[0]){
                int j = 1;
                while(j<needle.length()){
                    if(needle[j]==haystack[j+i])
                        j++;
                    else
                        break;
                    }
                if(j==needle.length())
                    return i;
              }
            i++;
        }
    return -1;
    }
};
