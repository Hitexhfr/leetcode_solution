class Solution {
public:
   int count;
   void merge(vector<int>& nums,int l,int m,int r){
   int n1 = m - l +1, n2 = r- m;
    vector <int> L1(n1),L2(n2);
    int k =l;
    for(int i= 0;i<n1;i++){
        L1[i] = nums[k];
        k++; 
    }
    for(int i= 0;i<n2;i++){
        L2[i] = nums[k];
        k++; 
    }

    int i =0,j=0;k=l;

    while(i<n1 && j<n2){
        if(L1[i]<=L2[j]){
            nums[k]=L1[i];
            i++;
        }
        else{
            nums[k] = L2[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        nums[k] = L1[i];
        i++;
        k++;
    }
    while(j<n2){
        nums[k] = L2[j];
        j++;
        k++;
    }
}
   void countPairs(vector<int>& nums,int l,int mid, int r){
        int j = mid + 1;
        for(int i=l;i<=mid;i++){
           while(j<=r && nums[i]> 2LL*nums[j]) {
            j++;
           }
           count += j -(mid+1);
        }
   }
   void mergeSort(vector<int>& nums,int l,int r){
        if(l==r) return;

        int mid = l+(r-l)/2;

        mergeSort(nums,l,mid);
        mergeSort(nums,mid+1,r);
        countPairs(nums,l,mid,r);
        merge(nums,l,mid,r);
   }
   int reversePairs(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
    return count;
    }
};
