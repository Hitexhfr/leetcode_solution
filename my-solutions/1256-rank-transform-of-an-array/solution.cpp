class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector <int> temp = arr;
        sort(temp.begin(),temp.end());

        map <int,int> rank;
        int r =1;
        for(auto value:temp){
            if(rank.count(value)==0){ 
               rank[value] = r;
               r++;}   
        }
        for(int i = 0;i<arr.size();i++){
            arr[i] = rank[arr[i]];
        } 
    return arr;   
   }
};
