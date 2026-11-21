class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> ans;
        int n = rain.size();

        int alice = 0, bob = 0;

        for (int i = 0; i < n; i++) {
            if (alice <= bob && i < n - 1 &&
                (rain[i] == 1 && rain[i + 1] == 1)) {
                ans.push_back("Alice");
                alice++;
           } else if(alice>bob && i<n-1 && (rain[i]==1 && rain[i+1]==1)) {
                ans.push_back("Bob");
                bob++;
            }
          else if (i<n-1 && rain[i] == 1 && rain[i + 1] == 0 ) {
            ans.push_back("Bob");
            bob++;
        } else if(rain[i]==1){
            ans.push_back("Bob");
            bob++;
        }
        else {
            ans.push_back("None");
        }
    }
    return ans;
    }
};
