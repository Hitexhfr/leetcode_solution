class Solution {
public:/* 
      if my k > 1, then i can always be able to sort the string in smallest lexicographical order. i only got to worry about when  k==1
    */
    string orderlyQueue(string s, int k) {
         if(k>1){
            sort(s.begin(),s.end());
           return s; 
        }
        string ans = s;
        for(int i  = 0;i<s.length();i++){
            rotate(s.begin(),s.begin()+1,s.end());
            ans = min(s,ans);
        }
      return ans;         
    }
};
