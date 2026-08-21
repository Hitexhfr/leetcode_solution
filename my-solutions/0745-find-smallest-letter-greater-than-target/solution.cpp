class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = '{';
        for(int i = 0;i<letters.size();i++){
            char curr = char(letters[i]);
            if(curr>target){
                ans = min(ans,curr);
            }
        }
        if(ans == '{') return letters[0];
      return ans;  
    }
};
