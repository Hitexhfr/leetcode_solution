class Solution {
public:
    bool isPossible(vector <int> &quantities,int n,int k,int sol){
        int count = 0;
        for(auto value : quantities){
            int stores_needed = value/sol;
            if(value%sol!=0){
                stores_needed ++;
            }
            count += stores_needed;
            if (count > n) {
                return false;
            }
        }
    return true;    
    } 
    int minimizedMaximum(int n, vector<int>& quantities) {
        int k = quantities.size();
        if(n==1){
            return quantities[0];
        }
       
        int start = 1;
        int end = *max_element(quantities.begin(), quantities.end());
        int ans = end;

        while(start<=end){
            int mid = start + (end - start)/2;
            if(isPossible(quantities,n,k,mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
     return ans;   
    }
};
