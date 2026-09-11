class Solution {
public:
    string compressedString(string word) {
        char prev = word[0];
        int count = 1;string ans;

        for (int i = 1; i < word.length(); i++){
               if (word[i] == prev) {
                    count++;
                    if(count==10){
                        ans +='9';
                        ans += prev;
                        count =1;
                    }
                } 
                else {
                    char curr = word[i];
                    ans += count + '0';
                    ans += prev;
                    prev = curr;
                    count = 1;
                }
            }
        ans += count + '0';
        ans += prev;

     return ans;   
    }
};
