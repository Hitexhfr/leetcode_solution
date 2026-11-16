class Solution {
public:
    bool is_vowel(char ch){
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U') return true;
      return false;  
    }
    bool halvesAreAlike(string s) {
        int n = s.size();

        int first_half = 0,second_half = 0;

        for(int i=0;i<n/2;i++){
            if(is_vowel(s[i])) first_half++;
        }
        for(int i=n/2;i<n;i++){
            if(is_vowel(s[i])) second_half++;
        }
      return second_half == first_half;
    }
};
