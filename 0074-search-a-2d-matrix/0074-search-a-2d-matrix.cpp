class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size();
        int a=0,b=col-1;
        while(a<row && b>-1){
            int c=matrix[a][b];
            if(c==target){
                return true;
            }
            if(target>c){
                a++;
            }
            else{
                b--;
            }
        }
        return false;
    }
};