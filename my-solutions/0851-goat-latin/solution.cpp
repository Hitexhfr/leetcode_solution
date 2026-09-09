class Solution {
public:
    string toGoatLatin(string sentence) {
        string ans;int counter = 1;
        for(int i = 0;i<sentence.length();i++){
            string curr;
            while(i<sentence.length() && isalpha(sentence[i])){
                curr += sentence[i];
                i++;
            }
            if (curr[0] == 'A' || curr[0] == 'E' || curr[0] == 'I' ||
                curr[0] == 'O' || curr[0] == 'U' || curr[0] == 'a' ||
                curr[0] == 'e' || curr[0] == 'i' || curr[0] == 'o' ||
                curr[0] == 'u') {
                    ans += curr + "ma" + string(counter++,'a');
                }
            else{
                ans += curr.substr(1) + curr[0] + "ma" + string(counter++,'a');
            }
            if(i!=sentence.length()) ans += " ";    
        }
        return ans;
    }
};
