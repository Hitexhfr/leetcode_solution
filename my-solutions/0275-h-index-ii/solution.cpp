class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int s = 0,e = n-1,cit_i=0;

        while(s<=e){
            int mid = s +(e-s)/2;
            int cities = citations[mid],papers=n-mid; 

            if(papers<= cities){
                cit_i = papers;
                e = mid -1;
            }
            else{
                s = mid + 1;
            }
        }
       return cit_i;  
    }
};
