class Solution {
public:
    string frequencySort(string s) {
        vector <int> freq(256,0);
        for(char ch : s){
            freq[ch]++;
        }
        string ans;int i = 0;
        while(i<s.length()){
            int maxi = 0,idx = 0;
            for(int j = 1;j<256;j++){
                if(freq[j]>maxi){
                    maxi = freq[j];idx= j;
                }
            }
            for(int k = 0;k<maxi;k++){
                ans += char(idx);
            }
            i += maxi;freq[idx]=0;
        }
        return ans;      
    }
};
