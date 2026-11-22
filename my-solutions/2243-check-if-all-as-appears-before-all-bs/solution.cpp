class Solution {
public:
    bool checkString(string s) {
        bool a = false,b = false;

        for(char ch:s){
            if(b && ch=='a'){
                return false;
            } else if(!b && ch=='a'){
                a = true;
            } else {
                b = true;
            }
        }
        return true;
    }
};
