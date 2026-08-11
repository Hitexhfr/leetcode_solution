class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector <int> freq(1001,0);
       for(int x:arr1) freq[x]++;
       int k = 0;
       for(int x:arr2){
          while(freq[x]>0){
            arr1[k++]=x;
            freq[x]--;
          }
       }

       for(int x = 0;x<=1000;x++){
           while(freq[x]>0){
               arr1[k++] = x;
               freq[x]--;
           }
         }
     return arr1;
    }
};
