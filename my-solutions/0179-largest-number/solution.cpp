class Solution {
public:
    static bool numComparator(string a,string b){
        string t1 = a + b;
        string t2 = b + a;
        return t1>t2;
    }
    string largestNumber(vector<int>& nums) {
        vector <string> nstr;
        for(int n:nums) nstr.push_back(to_string(n));

        sort(nstr.begin(),nstr.end(), numComparator);
        if(nstr[0]=="0") return "0";

        string ans;
        for(auto value:nstr) ans += value;
     return ans; 
    }
};
