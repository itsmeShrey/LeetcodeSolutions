class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        vector<vector<int>>v;
        v=mat;
        int c=v.size();
        int sum=0;
        if(c%2==0){
            for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                if((j==i) || (j+i+1==c)){
                    sum+=v[i][j];
                }
            }
        }
        }
        else{
            for(int i=0;i<v.size();i++){
                for(int j=0;j<v[i].size();j++){
                    if((j==i)||((j+i)==(c-1))){
                        sum+=v[i][j];
                    }
                }
            }
        }
        return sum;
    }
};