class Solution {
public:
 void computeLPS(vector<int>& pattern, vector<int>& lps) {
        int M = pattern.size(),len = 0;
        lps[0] = 0;

        int i = 1;
        while (i < M) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }

    bool search(vector<int>& pat, vector<int>& txt) {
        int N = txt.size();
        int M = pat.size();

        vector<int> lps(M, 0);
        computeLPS(pat, lps);

        int i = 0; 
        int j = 0; 

        while (i < N) {
            if (pat[j] == txt[i]) {
                i++;
                j++;
            }

            if (j == M) {
                return true;
            } else if (i < N && pat[j] != txt[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return false;
    }
    bool isRotationPossible(vector <int>& vec1, vector <int>& vec2){
        vector <int> txt = vec2;
        for(int x:vec2){
            txt.push_back(x);
        } 
        return search(vec1,txt);
    }
    int sortableIntegers(vector<int>& nums) {
       int n = nums.size(),sum =0;

       vector <int> sorted = nums;
       sort(sorted.begin(),sorted.end());

       for(int k=1;k<=n;k++){
           if(n%k!=0) continue;
           bool check = true;

           for(int i = 0;i<n;i+=k){
              vector <int> vec1(nums.begin()+i,nums.begin() + i+k);
              vector <int> vec2(sorted.begin()+i,sorted.begin()+i+k);

              if(!isRotationPossible(vec1,vec2)){
                 check = false;
                 break;
              }
           }
           if(check){
             sum += k;
           }
       }
       return sum;
    }
};
