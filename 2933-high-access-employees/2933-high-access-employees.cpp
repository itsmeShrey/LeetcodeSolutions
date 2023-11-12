class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        vector<vector<string>>v;
        v=access_times;
        int x=v.size()-2;
        sort(v.begin(),v.end());
        vector<string>v1;
        for(int i=0;i<x;i++){
            if(v[i][0]==v[i+2][0]){
                int c=stoi(v[i][1]);
                int d=stoi(v[i+2][1]);
                int e=d-c;
                if(e<=99){
                    vector<string>::iterator it;
                    it=find(v1.begin(),v1.end(),v[i][0]);
                    if(it!=v1.end()){
                        continue;
                    }
                    else{
                        v1.push_back(v[i][0]);
                    }
                }
            }
        }
        return v1;
    }
};