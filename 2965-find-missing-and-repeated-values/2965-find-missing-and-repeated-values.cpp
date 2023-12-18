class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<vector<int>>v;v=grid;
        map<int,int>m;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                m[v[i][j]]+=1;
            }
        }
        int c=v.size()*v.size();int a,b;int sum1=0,sum2=0;
        for(auto l:m){
            if(l.second>1){
                a=l.first;
                sum1+=l.first;
            }
            sum1+=l.first;
        }
        cout<<sum1<<endl;
        sum1=sum1-a;
        sum2=(c*(c+1))/2;
        cout<<sum2<<endl;
        return {a,sum2-sum1};
        
    }
};