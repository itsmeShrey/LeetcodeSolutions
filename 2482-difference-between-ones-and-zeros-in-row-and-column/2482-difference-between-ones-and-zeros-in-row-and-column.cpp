class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>>v;
        v=grid;
        vector<int>v1(v.size()),v2(v.size()),v3(v[0].size()),v4(v[0].size());
        for(int i=0;i<v.size();i++){
            int count1=0,count2=0;
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]==1){
                    count1++;
                }
                else{
                    count2++;
                }
            }
            v1[i]=count1;
            v2[i]=count2;
        }
        for(int i=0;i<v[0].size();i++){
            int count1=0,count2=0;
            for(int j=0;j<v.size();j++){
                if(v[j][i]==1){
                    count1++;
                }
                else{
                    count2++;
                }
            }
            v3[i]=count1;
            v4[i]=count2;
        }
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                v[i][j]=v1[i]-v2[i]+v3[j]-v4[j];
            }
        }
        return v;
    }
};