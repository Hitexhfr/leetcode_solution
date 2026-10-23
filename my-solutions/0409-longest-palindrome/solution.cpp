class Solution {
public:
    int longestPalindrome(string s) {
        vector <int> freq(255,0);

        for(char ch:s) freq[ch]++;
     
        bool isOdd = false;
        int res = 0;

        for(auto value:freq){
            int curr_freq = value;

            if(curr_freq % 2==0){
                res += curr_freq;
            }
            else{
                res += curr_freq -1;
                isOdd = true;
            }
        }
      return isOdd ? res +1: res;
    }
};
