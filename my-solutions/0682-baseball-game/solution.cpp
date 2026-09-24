class Solution {
public:
    int calPoints(vector<string>& operations) {
       stack<int> st;int sum = 0;
       for(string s:operations){
          if(s!= "C" && s!="D" && s!="+"){
              int curr = stoi(s);
              st.push(curr);
              sum += curr;
          }
          else if(s=="C"){
              int curr = st.top();
              st.pop();
              sum -= curr;
          }
          else if(s=="D"){
             int last = st.top();
             st.push(2*last);
             sum += 2*last;
          }
          else{
             int first = st.top();
             st.pop();
             int second = st.top();

             int curr_sum = first+second;

             st.push(first);
             st.push(curr_sum);

             sum += curr_sum;
           }
       }
       return sum;
    }
};
