class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector <int> freq(1001,0);

        for(int x:arr1) freq[x]++;
        int k = 0;
        for(int x:arr2){
            while(freq[x]){
                arr1[k++] = x;
                freq[x]--;
            }
        }

        for(int i = 0;i<1001;i++){
            while(freq[i]){
                arr1[k++] = i;
                freq[i]--;
            }
        }
      return arr1;
    }
};
