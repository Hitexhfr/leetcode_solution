class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;

        int i = 0;

        while(i<s1.size()){
              string temp1,temp2;
              while(s1[i]!=s2[i]){
                  temp1 += s1[i];
                  temp2 += s2[i];
                  i++;
              }
              if(!temp1.empty() && !temp2.empty()) ans.push_back({temp1,temp2});
            i++;  
        }
        return ans;
    }
};
