class Solution {
public:
    int minRange(int a, int b, int c) {
        int first = max({a,b,c});
        int third = min({a,b,c});
        int second = a + b + c - first - third;

        if(first>second + third){
            first = second + third;
        }
      return first - third;
    }
};
