class Solution {
public:
    int calPoints(vector<string>& operations) {
        int score = 0;
        stack <int> st;

        for(auto s:operations){
            if(s!= "D" && s!= "C" && s!="+"){
                int curr = stoi(s);
                st.push(curr);
                score += curr;
            }
            else if(s=="C"){
                int last = st.top();
                st.pop();
                score -= last;
            }
            else if(s=="D"){
                int twice = 2*st.top();
                st.push(twice);
                score += twice;
            }
            else{
                int last = st.top();
                st.pop();
                int second_last = st.top();
                int sum = last + second_last;
                st.push(last);
                st.push(sum);
                score += sum;
            }
        }
        return score;
    }
};
