class Solution {
public:
    int beautySum(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            map <char,int> m;
            for(int j = i;j<s.length();j++){
                m[s[j]]++;
                int m_mx=0,m_mn = INT_MAX;

                for(auto a:m){
                    m_mx = max(m_mx,a.second);
                    m_mn = min(m_mn,a.second);
                }
                ans += m_mx - m_mn;  
            }
        }
        return ans;
    }
};
