class Solution {
public:
    int minOperations(string s) {
        int n = s.length();

        if(is_sorted(s.begin(),s.end())) return 0;

        if(n==2) return -1;

        char mini = *min_element(s.begin(),s.end());
        char maxi = *max_element(s.begin(),s.end());

        //when min is at 0 and max at n-1 return --> 1
        //when min or max is at mid when one of them is at opposite of their pos --> 2
        //when both of min and min are at opposite end --> 3

        if(s[0]==mini || s[n-1]==maxi) return 1;

        char max_mid =*max_element(s.begin()+1,s.end()-1);
        char min_mid = *min_element(s.begin()+1,s.end()-1);
        
        if(s[0]>max_mid && s[n-1]<min_mid) return 3;

        return 2;
    }
};
