class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for(int i = 1;i<strs.size();i++){
            string temp = strs[i];
            string curr ="";
            int j = 0;
            while(j<prefix.length() && j<temp.length()){
                if(prefix[j]==temp[j]){
                    curr += prefix[j];
                }
                else{
                    break;
                }
             j++;   
            }

            prefix = curr;

            if(prefix==""){ 
                return "";
            }
        }
    return prefix;    
    }
};
