class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string case1;
        for(int i = 0;i<word1.size();i++){
            string curr = word1[i];
            for(char ch:curr){
                case1 += ch;
            }
        }
        string case2;
        for(int i = 0;i<word2.size();i++){
            string curr = word2[i];
            for(char ch:curr){
                case2 += ch;
            }
        }
    return case1 == case2;
    }
};
