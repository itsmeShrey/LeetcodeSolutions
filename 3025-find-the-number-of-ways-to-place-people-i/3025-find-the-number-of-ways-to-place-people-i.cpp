class Solution {
public:
    int numberOfPairs(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        int count=0;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                bool flag=true;
                if((v[i][0]<=v[j][0] && v[i][1]>=v[j][1]) ||(v[i][0]>=v[j][0] && v[j][1]>=v[i][1])){
                    int c=max(v[i][0],v[j][0]),d=min(v[i][0],v[j][0]),e=max(v[i][1],v[j][1]),f=min(v[i][1],v[j][1]);
                    for(int k=0;k<v.size();k++){
                        if(k!=i && k!=j){
                            if(v[k][0]<=c && v[k][0]>=d && v[k][1]<=e && v[k][1]>=f){
                                flag=false;
                            }
                        }
                    }
                    if(flag==true){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};