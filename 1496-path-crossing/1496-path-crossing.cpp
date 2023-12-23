class Solution {
public:
    bool isPathCrossing(string path) {
        set<vector<int>>s;int flag=0;vector<vector<int>>v;v.push_back({0,0});
        s.insert(v[0]);
        for(int i=0;i<path.length();i++){
            if(path[i]=='N'){
                v[0][1]+=1;
            }
            if(path[i]=='S'){
                v[0][1]-=1;
            }
            if(path[i]=='E'){
                v[0][0]+=1;
            }
            if(path[i]=='W'){
                v[0][0]-=1;
            }
            auto it=find(s.begin(),s.end(),v[0]);
            if(it==s.end()){
                s.insert(v[0]);
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            return true;
        }
        else{
            return false;
        }
    }
};