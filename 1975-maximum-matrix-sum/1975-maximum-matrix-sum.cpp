class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long int sum=0;long long int negcount=0;int mini=INT_MAX;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<=0){
                    negcount++;
                }
                mini=min(mini,abs(matrix[i][j]));
            }
        }
        if(negcount%2==0 || negcount==0){
            return sum;
        }
        else{
            return sum-mini-(mini);
        }
    }
};