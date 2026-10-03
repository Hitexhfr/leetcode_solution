class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=0;
        for(int i=0;i<sentences.size();i++){
            string curr=sentences[i];
            int x=1;
            for(char ch:curr){
                if(ch==' ') x++;
            }
            n=max(n,x);
        }
        return n;
    }
};
