class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
       int startCol = 0, endCol = mat[0].size()-1;

       while(startCol<=endCol){
        int midCol = startCol + (endCol - startCol)/2;
        int maxRow =0;
        for(int i =0;i<mat.size();i++){
            if(mat[i][midCol]>=mat[maxRow][midCol]){
                maxRow =i;}
        }
        bool leftbig = midCol>= startCol + 1 && mat[maxRow][midCol]<mat[maxRow][midCol-1];
        bool rightbig = midCol <= endCol - 1 && mat[maxRow][midCol]< mat[maxRow][midCol+1];

        if(!leftbig && !rightbig) return{maxRow,midCol};

        if(leftbig) endCol = midCol -1;
        else startCol = midCol +1;
        }
    return {-1,-1};    
    }
};
